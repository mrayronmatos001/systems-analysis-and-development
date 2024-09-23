import java.util.Scanner;

public class Elevator {
    private int floor;
    private int floors;
    private int people;
    private int capacity;

    public Elevator() {
        this.floor = 0;
        this.people = 0;
    }

    public int getFloor() {
        return floor;
    }

    public void setFloor(int floor) {
        this.floor = floor;
    }

    public int getFloors() {
        return floors;
    }

    public void setFloors(int floors) {
        this.floors = floors;
    }

    public int getPeople() {
        return people;
    }

    public void setPeople(int people) {
        this.people = people;
    }

    public int getCapacity() {
        return capacity;
    }

    public void setCapacity(int capacity) {
        this.capacity = capacity;
    }

    public void initializer(int floors, int capacity) {
        this.floors = floors;
        this.capacity = capacity;
    }

    public void showStatus() {
        System.out.println("floor: " + floor);
        System.out.println("floors: " + floors);
        System.out.println("people: " + people);
        System.out.println("capacity: " + capacity);
    }

    public void enter() {
        if(capacity>people) {
            people++;
            System.out.println("One person entered the elevator.");
        }else {
            System.out.println("Elevator is full! No more people can enter.");
        }
    }

    public void exit() {
        if(people>0) {
            people--;
            System.out.println("One person exit the elevator.");
        } else {
            System.out.println("Elevator is empty! There aren't people to leave.");
        }
    }
    public static void main(String[] args) {
        Elevator elevator = new Elevator();
        Scanner scanner = new Scanner(System.in);
        int option, tfloors, cpcty;
        do {
            System.out.println("----------------------------------");
            System.out.println("|          ELEVATOR MENU         |");
            System.out.println("----------------------------------");
            System.out.println("| 1 - initialize elevator        |");
            System.out.println("| 2 - show status                |");
            System.out.println("| 3 - enter the elevator         |");
            System.out.println("| 4 - exit the elevator          |");
            System.out.println("| 5 - exit menu                  |");
            System.out.println("----------------------------------");

            System.out.println("Please, choose an option: ");
            option = scanner.nextInt();
            scanner.nextLine();
            
            switch(option) {
                case 1:
                    System.out.println("Now, choose the total floors and the capacity: ");
                    tfloors = scanner.nextInt();
                    scanner.nextLine();
                    cpcty = scanner.nextInt();
                    scanner.nextLine();
                    elevator.initializer(tfloors, cpcty);
                    break;
                
                case 2:
                    elevator.showStatus();
                    break;

                case 3:
                    elevator.enter();
                    break;

                case 4:
                    elevator.exit();
                    break;
                
                case 5:
                    System.out.println("Exiting menu.");
                    break;
                
                default:
                    System.out.println("Invalid option. Please try again.");
            }
        }while(option!=5);

        scanner.close();
    }
}
