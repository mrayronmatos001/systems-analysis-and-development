import java.util.Scanner;
import java.util.InputMismatchException;

public class MagicSquare {
    private int size;
    private int[][] square;
    private int magicSum;

    public MagicSquare(int size) {
        this.size = size;
        this.square = new int[size][size];
        this.magicSum = size * (size * size + 1) / 2;
    }

    public int[][] getSquare() {
        return square;
    }

    public void setSquare(int[][] square) {
        this.square = square;
    }

    private boolean checkLines() {
        int i, j;
        for(i=0; i<size; i++) {
            int rowSum = 0;
            for(j=0; j<size; j++) {
                rowSum += square[i][j];
            }
            if(rowSum != magicSum) {
                return false;
            }
        }
        return true;
    }

    private boolean checkColumn() {
        int i, j;
        for(i=0; i<size; i++) {
            int columnSum = 0;
            for(j=0; j<size; j++) {
                columnSum += square[j][i];
            }
            if(columnSum != magicSum) {
                return false;
            }
        }
        return true;
    }

    private boolean checkMainDiagonal() {
        int i, j, mainDiagonalSum=0;
        for(i=0; i<size; i++) {
            for(j=0; j<size; j++) {
                if(i == j) {
                    mainDiagonalSum += square[i][j];
                }
            }
        }
        if(mainDiagonalSum != magicSum) {
            return false;
        }
        return true;
    }

    private boolean checkSecondaryDiagonal() {
        int i, j, secondaryDiagonalSum=0;
        for(i=0; i<size; i++) {
            for(j=0; j<size; j++) {
                if ((i+j) == (size-1)) {
                    secondaryDiagonalSum += square[i][j];
                }
            }
        }
        if(secondaryDiagonalSum != magicSum) {
            return false;
        }
        return true;
    }

    public void status() {
        int i,j;
        for(i=0; i<size; i++) {
            for(j=0; j<size; j++) {
                System.out.print(square[i][j] + "\t");
            }
            System.out.println();
        }
    }

    public boolean isMagicSquare() {
        if(checkLines() && checkColumn() && checkMainDiagonal() && checkSecondaryDiagonal()) {
            return true;
        }
        return false;
    }

    public void fillSquare(Scanner scanner) {
        System.out.println("Fill the Magic Square.");

        int i,j;
        for(i=0; i<size; i++) {
            for(j=0; j<size; j++) {
                int num = -1;
                boolean validInput = false;

                while(!validInput) {
                    System.out.print("Enter the number for the position [" + i + "][" + j + "]: ");
                    try {
                        num = scanner.nextInt();
                        
                        if(num > 0 && num <= size * size && !containsNumber(num)) {
                            validInput = true;
                        } else {
                            System.out.println("Please enter a valid number between 1 and " + (size * size) + " that hasn't been entered before.");
                        }
                    } catch(InputMismatchException e) {
                        System.out.println("That's not a valid number. Please enter a number.");
                        scanner.next();
                    }
                }

                square[i][j] = num;
            }
        }
        scanner.close();
    }

    private boolean containsNumber(int num) {
        for(int i = 0; i < size; i++) {
            for(int j = 0; j < size; j++) {
                if(square[i][j] == num) {
                    return true;
                }
            }
        }
        return false;
    }
    
    public static int catchSize(Scanner scanner) {
        int magicSquareSize = -1;
        boolean isValid = false;
        while(!isValid) {
            System.out.print("Enter the size: ");
            try {
                magicSquareSize = scanner.nextInt();

                if(magicSquareSize > 2 && magicSquareSize < 10) {
                    isValid = true;
                }
            } catch(InputMismatchException e) {
                System.out.println("That's not a valid number. Please enter a number.");
                scanner.next();
            }
        }
        return magicSquareSize;
    }

    public static void clearScreen() {
        try {
            if(System.getProperty("os.name").contains("Windows")) {
                new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor();
            } else {
                new ProcessBuilder("clear").inheritIO().start().waitFor();
            }
        } catch (Exception e) {
            System.out.println("Error while trying to clean the screen: " + e.getMessage());
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        MagicSquare.clearScreen();
        int magicSquareSize = MagicSquare.catchSize(scanner);
        MagicSquare square = new MagicSquare(magicSquareSize);
        square.status();
        square.fillSquare(scanner);
        if(square.isMagicSquare()) {
            System.out.println("It's a genuine magic square!");
        } else {
            System.out.println("It's not a Magic Square!");
        }
        scanner.close();
    }
}