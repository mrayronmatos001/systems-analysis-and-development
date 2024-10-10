import java.util.ArrayList;
import java.util.Scanner;
import java.util.InputMismatchException;

public class App {
    public static void displayMenu() {
        System.out.println("--------------------------------");
        System.out.println("         MENU PRINCIPAL         ");
        System.out.println("--------------------------------");
        System.out.println("1 - CADASTRAR ALUNOS            ");
        System.out.println("2 - CADASTRAR NOTAS             ");
        System.out.println("3 - CALCULAR MÉDIAS             ");
        System.out.println("4 - INFORMAR SITUAÇÕES          ");
        System.out.println("5 - INFORMAR DADOS DE UM ALUNO  ");
        System.out.println("6 - ALTERAR NOTA                ");
        System.out.println("7 - SAIR                        ");
    }

    public static void cleaningScreen() {
        try {
            if (System.getProperty("os.name").contains("Windows")) {
                new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor();
            } else {
                new ProcessBuilder("clear").inheritIO().start().waitFor();
            }
        } catch (Exception e) {
                System.out.println("Error while trying to clean the screen: " + e.getMessage());
        }
    }

    public static void pause(Scanner reader) {
        System.out.println("\nPress Enter to continue...");
        reader.nextLine();
    }

    public static void displayStudents(ArrayList<Student> students) {
        if(students.isEmpty()) {
            System.out.println("No students registered.");
        } else {
            System.out.println("Registered Students: ");
            for (Student student : students) {
                System.out.println(student);
            }
        }
    }

    public static void main(String[] args) {
        ArrayList<Student> students = new ArrayList<Student>();

        Scanner reader = new Scanner(System.in);
        int option = -1;
        boolean isValidNum, isValidInput;
        isValidNum = isValidInput = false;

        App.cleaningScreen();
        do {
            App.displayMenu();

            do {
                System.out.print("\nInsert a valid option: ");
                try {
                    option = reader.nextInt();
                    isValidNum = true; 
                    
                } catch (InputMismatchException e) {
                    System.out.println("That's not a valid number. Please enter a number.");
                    reader.nextLine();
                }
            } while (!isValidNum);
            isValidNum = false;

            reader.nextLine();

            switch(option) {
                case 1:
                    char ask = 'a';
                    Student student = new Student();
                    do {

                        System.out.print("Enter the student name: ");
                        try {
                            String studentName = reader.nextLine();

                            if(!studentName.matches("[a-zA-Z ]+")) {
                                throw new InputMismatchException("Invalid name. Only letters and spaces are allowed.");
                            }
                            student.setName(studentName);
                        } catch (InputMismatchException e) {
                            System.out.println("That's not a valid name. Please enter a name using only letters and spaces");
                            reader.nextLine();
                            continue;
                        }

                        do {
                            System.out.print("Enter the student enrollment: ");
                            try {
                                int studentEnrollment = reader.nextInt();
                                student.setEnrollment(studentEnrollment);
                                isValidNum = true;
                            } catch (InputMismatchException e) {
                                System.out.println("That's not a valid number. Please enter a number.");
                                reader.nextLine();
                            }
                        } while (!isValidNum);
                        isValidNum = false;

                        students.add(student);

                        do {
                            System.out.print("\nDo you want to register another student? n-no / y-yes: ");
                            try {
                                String input = reader.next();
                                if (input.length() == 1) {
                                    ask = input.charAt(0);
                                    isValidInput = true;
                                }
                            } catch (InputMismatchException e) {
                                System.out.println("That's not a valid char. Please enter a char.");
                                reader.nextLine();
                            }
                        } while (!isValidInput);
                        isValidInput = false;

                    } while (ask != 'n' && ask != 'N');

                    App.cleaningScreen();
                    break;
                    
                case 2:
                    if (students.isEmpty()) {
                        System.out.println("There aren't any students. Please return to menu and register at least one.");
                        App.pause(reader);
                    } else {
                        String studentName = "a";
                        Student std = null;
                        boolean wasStudentFound = false;

                        do {
                            System.out.print("Enter a valid student name to register his grades: ");
                            try {
                                studentName = reader.nextLine();

                                if(!studentName.matches("[a-zA-Z ]+")) {
                                    throw new InputMismatchException("Invalid name. Only letters and spaces are allowed.");
                                }
                                isValidInput = true;
                            } catch (InputMismatchException e) {
                                System.out.println("That's not a valid name. Please enter a name using only letters ans spaces.");
                                reader.nextLine();
                            }
                        } while (!isValidInput);
                        isValidInput = false;

                        
                        for (Student stdent : students) {
                            if (stdent.getName().equalsIgnoreCase(studentName)) {
                                std = stdent;
                                wasStudentFound = true;
                                break;
                            }
                        }
                        
                        if (wasStudentFound) {
                            do {
                                System.out.print("Enter the student grade 1: ");
                                try {
                                    Float stdGrade1 = reader.nextFloat();
                                    std.setGrade1(stdGrade1);
                                    isValidNum = true;
                                } catch (InputMismatchException e) {
                                    System.out.println("That's not a valid number. Please enter a number.");
                                    reader.nextLine();
                                }
                            } while (!isValidNum);
                            isValidNum = false;
    
                            do {
                                System.out.print("Enter the student grade 2: ");
                                try {
                                    Float stdGrade2 = reader.nextFloat();
                                    std.setGrade2(stdGrade2);
                                    isValidNum = true;
                                } catch (InputMismatchException e) {
                                    System.out.println("That's not a valid number. Please enter a number.");
                                    reader.nextLine();
                                }
                            } while (!isValidNum);
                            isValidNum = false;
    
                            do {
                                System.out.print("Enter the student grade 3: ");
                                try {
                                    Float stdGrade3 = reader.nextFloat();
                                    std.setGrade3(stdGrade3);
                                    isValidNum = true;
                                } catch (InputMismatchException e) {
                                    System.out.println("That's not a valid number. Please enter a number.");
                                    reader.nextLine();
                                }
                            } while (!isValidNum);
                            isValidNum = false;

                            std.calculatingAverage();
                            std.informingSituation();
                        } else {
                            System.out.println("Student not found");
                            App.pause(reader);
                        }
                    }

                    App.cleaningScreen();
                    break;

                case 3:
                    if (students.isEmpty()) {
                        System.out.println("There aren't any students. Please return to menu and register at least one.");
                        App.pause(reader);
                    } else {
                        Student std = null;
                        String studentName = "a";
                        boolean wasStudentFound = false;

                        do {
                            System.out.print("Enter a valid name: ");
                            try {
                                studentName = reader.nextLine();
    
                                if (!studentName.matches("[a-zA-Z ]+")) {
                                    throw new InputMismatchException("Invalid name. Only letters and spaces are allowed.");
                                }
                                isValidInput = true;
                            } catch (InputMismatchException e) {
                                System.out.println("That's not a name. Please enter a name using only letters and spaces.");
                                reader.nextLine();
                            }
                        } while (!isValidInput);
                        isValidInput = false;
    
                        for (Student stdent : students) {
                            if (stdent.getName().equalsIgnoreCase(studentName)) {
                                std = stdent;
                                wasStudentFound = true;
                                break;
                            }
                        }

                        if (wasStudentFound && (std.getAverage() != null)) {
                            System.out.println("The average of this student is: " + std.getAverage());
                        } else if(wasStudentFound) {
                            System.out.println("Student found but he even hadn't gotten an average. Please return to menu and register his grades.");
                        } else {
                            System.out.println("Student not found.");
                        }
                    }

                    App.pause(reader);
                    App.cleaningScreen();
                    break;

                case 4:
                    if(students.isEmpty()) {
                        System.out.println("There aren't any students. Please return to menu and register at least one.");
                        App.pause(reader);
                    } else {
                        Student std = null;
                        String studentName = "a";
                        boolean wasStudentFound = false;

                        do {
                            System.out.print("Enter a valid name to verify the student situation: ");
                            try {
                                studentName = reader.nextLine();

                                if(!studentName.matches("[a-zA-Z ]+")) {
                                    throw new InputMismatchException("Invalid name. Only letters and spaces are allowed");
                                }
                                isValidInput = true;
                            } catch (InputMismatchException e) {
                                System.out.println("That's not a name. Please enter a name using only letters and spaces.");
                                reader.nextLine();
                            }
                        } while (!isValidInput);
                        isValidInput = false;

                        for (Student stdent : students) {
                            if(stdent.getName().equalsIgnoreCase(studentName)) {
                                std = stdent;
                                wasStudentFound = true;
                                break;
                            }
                        }

                        if(wasStudentFound && (std.getAverage() != null)) {
                            System.out.println("The student situation is: " + std.getSituation());
                        } else if (wasStudentFound) {
                            System.out.println("Student found but he even hadn't gotten grades yet. Please return to menu and register his grades.");
                        } else {
                            System.out.println("Student not found");
                        }

                    }

                    App.pause(reader);
                    App.cleaningScreen();
                    break;
                
                case 5:
                    if (students.isEmpty()) {
                        System.out.println("There aren't any students. Please return to menu and register at least one.");
                    } else {
                        String studentName = "a";
                        boolean wasStudentFound = false;

                        do {
                            System.out.print("Enter a valid name to display informations about target student: ");
                            try {
                                studentName = reader.nextLine();

                                if(!studentName.matches("[a-zA-Z ]+")) {
                                    throw new InputMismatchException("Invalid name. Only letters and spaces are allowed.");
                                }
                                isValidInput = true;
                            } catch (InputMismatchException e) {
                                System.out.println("That's not a name. Please enter a name using only letters and spaces.");
                                reader.nextLine();
                            }
                        } while (!isValidInput);
                        isValidInput = false;

                        for (Student stdent : students) {
                            if (stdent.getName().equalsIgnoreCase(studentName)) {
                                wasStudentFound = true;
                                System.out.println(stdent);
                                break;
                            }
                        }

                        if(!wasStudentFound) {
                            System.out.println("Students not found.");
                        }
                    }
                    
                    App.pause(reader);
                    App.cleaningScreen();
                    break;
                
                case 6:
                    if (students.isEmpty()) {
                        System.out.println("There aren't any students. Please return to menu and register at least one.");
                    } else {
                        int code = -1;
                        char question = 'a';
                        Float value = (float) 0;
                        Student std = null;
                        String studentName = "a";
                        boolean wasStudentFound = false;

                        do {
                            System.out.print("Enter a valid name to change the grades: ");
                            try {
                                studentName = reader.nextLine();

                                if (!studentName.matches("[a-zA-Z ]+")) {
                                    throw new InputMismatchException("Invalid name. Only letters and spaces are allowed.");
                                }
                                isValidInput = true;
                            } catch (InputMismatchException e) {
                                System.out.println("That's not a valid name. Please enter a name using only letters and spaces.");
                            }
                        } while (!isValidInput);
                        isValidInput = false;

                        for (Student stdent : students) {
                            if (stdent.getName().equalsIgnoreCase(studentName)) {
                                std = stdent;
                                wasStudentFound = true;
                            }
                        }

                        if (wasStudentFound) {
                            do {
                                do {
                                    System.out.print("Enter the code of the grade: ");
                                    try {
                                        code = reader.nextInt();
                                        isValidNum = true;
                                    } catch (InputMismatchException e) {
                                        System.out.println("That's not a number. Enter a number.");
                                        reader.nextLine();
                                    }
                                } while(!isValidNum);
                                isValidNum = false;
    
                                do {
                                    System.out.print("Enter the grade: ");
                                    try {
                                        value = reader.nextFloat();
                                        isValidNum = true;
                                    } catch (InputMismatchException e) {
                                        System.out.println("That's not a value. Enter a value.");
                                        reader.nextLine();
                                    }
                                } while (!isValidNum);
                                isValidNum = false;
                                
                                std.setSomeGrade(code, value);
                                std.calculatingAverage();
                                std.informingSituation();
    
                                System.out.print("Do you want to change another grade: n-no y-yes: ");
                                do {
                                    try {
                                        String input = reader.next();
        
                                        if (input.length() == 1) {
                                            question = input.charAt(0);
                                            isValidInput = true;
                                        }
                                    } catch (InputMismatchException e) {
                                        System.out.println("That's not a valid char. Please enter a char.");
                                    }
                                } while (!isValidInput);
                                isValidInput = false;
                            } while (question != 'n' && question != 'N');
                        }
                       
                    }

                    App.cleaningScreen();
                    break;

                case 7:
                    System.out.println("leaving the program...");
                    App.pause(reader);
                    App.cleaningScreen();
                    break;
                
                default:
                    System.out.println("Invalid option, Please choose a valid option.");
                    App.pause(reader);
                    App.cleaningScreen();
            }
        } while (option != 7);
        reader.close();
    }
}