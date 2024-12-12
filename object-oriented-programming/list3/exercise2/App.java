package exercise2;
import java.util.Scanner;

public class App {
    public static String[][] grid = new String[20][40];

    public static void initializeGrid(int line, int column) {
        for (int i = 0; i < grid.length; i++) {
            for (int j = 0; j < grid[i].length; j++) {
                grid[i][j] = " ";
            }
        }
        grid[line][column] = "1";
    }
    
    public static void displayMap(int line, int column) {
        grid[line][column] = "1";
        System.out.print(" ");
        for (int i = 0; i < grid[0].length; i++) {
            System.out.print("-");
        }
        System.out.println();

        for (int i = 0; i < grid.length; i++) {
            System.out.print("|");
            for (int j = 0; j < grid[i].length; j++) {
                if (grid[i][j].equals("1") && i != line || j != column) {
                    grid[i][j] = " ";
                }
                System.out.print(grid[i][j]);
            }
            System.out.println("|");
        }

        System.out.print(" ");
        for (int i = 0; i < grid[0].length; i++) {
            System.out.print("-");
        }
        System.out.println();
    }

    public static void clearScreen() {
        for (int i = 0; i < 50; i++) {
            System.out.println();
        }
    }

    private static void displayMenu() {
        System.out.println("1) - Andar para frente");
        System.out.println("2) - Andar para trás");
        System.out.println("3) - Andar para direita");
        System.out.println("4) - Andar para esquerda");
        System.out.println("5) - Sair");
    }

    public static void init(Scanner scanner, Robot robot) {
        int option = 0;
        do {
            displayMap(robot.getLine(), robot.getColumn());
            displayMenu();
            System.out.print("Informe uma opção: ");
            option = scanner.nextInt();
            clearScreen();

            switch (option) {
                case 1:
                    robot.moveFoward(grid);
                    break;
            
                case 2:
                    robot.moveBackward();
                    break;

                case 3:
                    robot.moveRight(grid);
                    break;
        
                case 4:
                    robot.moveLeft();
            }
        } while (option != 5);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Robot robot = new Robot();
        initializeGrid(robot.getLine(), robot.getColumn());

        init(scanner, robot);

        scanner.close();
    }
}
