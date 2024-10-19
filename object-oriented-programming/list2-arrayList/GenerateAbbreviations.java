import java.util.List;
import java.util.ArrayList;

public class GenerateAbbreviations {
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

    public static void main(String[] args) {
        cleaningScreen();

        List<String> abbr = new ArrayList<>();
        for (int i = 0; i < args.length; i++) {
            if (args[i].length() > 2) {
                abbr.add(String.valueOf(args[i].toUpperCase().charAt(0)) + ".");
            } else {
                abbr.add(args[i]);
            }
        }
        String abbreviation = String.join(" ", abbr);
        System.out.println(abbreviation);
    }
}