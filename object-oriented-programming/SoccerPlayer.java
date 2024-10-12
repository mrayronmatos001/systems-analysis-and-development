import java.time.LocalDate;
import java.time.format.DateTimeFormatter;

public class SoccerPlayer {
    private String name;
    private String position;
    private String birthdayDate;
    private String nationality;
    private float height;
    private float weight;

    public SoccerPlayer(String name, String position, String birthdayDate, String nationality, float height, float weight) {
        this.name = name;
        this.position = position;
        this.birthdayDate = birthdayDate;
        this.nationality = nationality;
        this.height = height;
        this.weight = weight;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getPosition() {
        return position;
    }

    public void setPosition(String position) {
        this.position = position;
    }

    public String getBirthdayDate() {
        return birthdayDate;
    }

    public void setBirthdayDate(String birthdayDate) {
        this.birthdayDate = birthdayDate;
    }

    public String getNationality() {
        return nationality;
    }

    public void setNationality(String nationality) {
        this.nationality = nationality;
    }

    public float getHeight() {
        return height;
    }

    public void setHeight(float height) {
        this.height = height;
    }

    public float getWeight() {
        return weight;
    }

    public void setWeight(float weight) {
        this.weight = weight;
    }

    @Override
    public String toString() {
        return "SoccerPlayer [name=" + name + ", position=" + position + ", birthdayDate=" + birthdayDate
                + ", nationality=" + nationality + ", height=" + height + ", weight=" + weight + "]";
    }

    public int calcAge() {
        int age = -1;
        DateTimeFormatter format = DateTimeFormatter.ofPattern("dd/MM/yyyy");
        LocalDate date = LocalDate.parse(birthdayDate, format);
        LocalDate today = LocalDate.now();
        if (date.getDayOfYear() > today.getDayOfYear()) {
            age = today.getYear() - date.getYear() - 1;
        } else {
            age = today.getYear() - date.getYear();
        }
        return age;
    }

    public int calcTimeUntilRetirement(int age, String position) {
        int time = -1;
        if (position == "forward") {
            time = 35 - age;
        } else if (position == "midfielder") {
            time = 38 - age;
        } else {
            time = 40 - age;
        }
        return time;
    }

    public static void clearScreen() {
        try {
            if (System.getProperty("os.name").contains("Windows")) {
                new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor();
            } else {
                System.out.print("\033[H\033[2J");
                System.out.flush();
            }
        } catch (Exception e) {
            System.out.println("Error while trying to clear the screen: " + e.getMessage());
        }
    }

    public static void main(String[] args) {
        SoccerPlayer.clearScreen();
        SoccerPlayer player1 = new SoccerPlayer("neymar", "forward", "22/09/1997", "brazilian", 1.81f, 110f);
        System.out.println(player1.calcTimeUntilRetirement(player1.calcAge(), player1.getPosition()));
        
    }
}