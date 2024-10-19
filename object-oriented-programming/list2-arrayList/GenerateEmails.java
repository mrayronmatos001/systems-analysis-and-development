import java.io.BufferedReader;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.HashSet;
import java.util.Set;

public class GenerateEmails {
    public static void cleaningScreen() {
        try {
            if (System.getProperty("os.name").contains("Windows")) {
                new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor();
            } else {
                System.out.println("\033[H\033[J");
            }
        } catch (Exception e) {
                System.out.println("Error while trying to clean the screen: " + e.getMessage());
        }
    }

    public static ArrayList<String> generateTeacherList(String csvPath, int quantity) {
        List<String> teachers = new ArrayList<>();
        try (BufferedReader br = Files.newBufferedReader(Paths.get(csvPath))) {
            String line;
            while ((line = br.readLine()) != null) {
                String[] columns = line.split(";");
                if (columns.length > 1) {
                    teachers.add(columns[1]);
                }
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
        Collections.shuffle(teachers);
        return new ArrayList<String>(teachers.subList(0, Math.min(quantity, teachers.size())));
    }

    public static void main(String[] args) {
        cleaningScreen();
        List<String> selectedTeachers = generateTeacherList("docentes.csv", 20);

        List<String> emails = new ArrayList<>();
        Set<String> emailSet = new HashSet<>();
        for (String name : selectedTeachers) {
            String[] pieces = name.toLowerCase().split(" ");
            String firstName = pieces[0];
            String lastName = pieces[pieces.length - 1];
            String email = firstName + '.' + lastName + "@ufrn.br";
            if (emailSet.contains(email)) {
                email = String.join(".", pieces) + "@ufrn.br";
            }
            email = email.replace("\"", "");
            emailSet.add(email);
            emails.add(email);
        }
        System.out.println(emails);
    }
}