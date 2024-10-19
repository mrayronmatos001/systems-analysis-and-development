import java.util.Scanner;
import java.util.InputMismatchException;
import java.util.List;
import java.util.ArrayList;

public class CityLocation {
    public static void cleaningScreen() {
        try {
            if (System.getProperty("os.name").contains("Windows")) {
                new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor();
            } else {
                System.out.println("\033[H\033[J");
            }
        } catch (Exception e) {
            System.out.println("Error while trying to clean the screen" + e.getMessage());
        }
    }

    public static void showTable(int[][] offsets) {
        for (int i = 0; i < offsets.length; i++) {
            for (int j = 0; j < offsets.length; j++) {
                System.out.print(offsets[i][j] + " ");
            }
            System.out.println();
        }
    }

    public static void offsetInsection(int[][] offsets, Scanner scanner) {
        int value;
        boolean isValid = false;
        for (int i = 0; i < offsets.length; i++) {
            for (int j = i; j < offsets.length; j++) {
                if (i == j) {
                    offsets[i][j] = 0;
                    continue;
                }
                do {
                    try {
                        System.out.print("Enter the [" + i + "][" + j + "]: ");
                        value = scanner.nextInt();
                        offsets[i][j] = value;
                        offsets[j][i] = value;
                        isValid = true;
                    } catch (InputMismatchException e) {
                        System.out.println("Error while trying to enter a number. Please enter a valid number.");
                        scanner.next();
                    }
                } while (!isValid);
            }
        }
    }

    public static void main(String[] args) {
        cleaningScreen();
        Scanner scanner = new Scanner(System.in);
        int sum = 0, quantity = 0;
        int[][] offsets = new int[5][5];
        List<Integer> way = new ArrayList<>();
        boolean isValid = false;
        char ask = 'a';
        offsetInsection(offsets, scanner);

        do {
            quantity++;
            if (ask == 'n' || ask == 'N' && quantity < 2) {
                System.out.println("you need at least 2 coordinates to end up");
            }
            do {
                try {
                    System.out.print("Enter a number to define the way: ");
                    int value = scanner.nextInt();
                    way.add(value-1);
                    isValid = true;
                } catch (InputMismatchException e) {
                    System.out.println("Error while trying to enter a number. Please enter a valid number.");
                    scanner.next();
                }
            } while (!isValid);
            isValid = false;

            System.out.print("do you want to conitue? y/n: ");
            ask = scanner.next().charAt(0);
        } while ((ask != 'n' && ask != 'N') || quantity < 2);

        for (int i = 0; i < (way.size() - 1); i++) {
            int positionX = way.get(i);
            int positionY = way.get(i+1);
            sum += offsets[positionX][positionY];
        }
        System.err.println("The sum is: " + sum);
        scanner.close();
    }
}
