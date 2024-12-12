import java.util.Scanner;
import java.util.List;
import java.util.ArrayList;

public class App {
    private static void displayMenu() {
        System.out.println("-------------------------------");
        System.out.println("|   BEM-VINDO AO GÁS BRASIL   |");
        System.out.println("|-----------------------------|");
        System.out.println("| 1 - Fazer Pedido            |");
        System.out.println("| 2 - Confirmar Entrega       |");
        System.out.println("| 3 - Ver Pedidos Confirmados |");
        System.out.println("| 4 - Ver Pedidos Entregues   |");
        System.out.println("| 5 - Sair                    |");
        System.out.println("-------------------------------");
    }

    public static void main(String[] args) {
        int option = -1, confirmation = 0, cylindersQty = 0, orderNum;
        float totalPrice = 0f;
        String initialHour, finalHour, address, paymentFormat;
        Scanner scanner = new Scanner(System.in);
        List<Order> Orders = new ArrayList<>();
        
        do {
            App.displayMenu();
            System.out.print("informe uma opção: ");
            option = scanner.nextInt();
            scanner.nextLine();
            switch (option) {
                case 1:
                    System.out.print("informe o horário da compra: ");
                    initialHour = scanner.nextLine();
                    finalHour = Order.calcFinalHour(initialHour);
                    System.out.print("informe o endereço: ");
                    address = scanner.nextLine();
                    do {
                        System.out.print("informe 1 (confirmar), 2 (alterar): ");
                        confirmation = scanner.nextInt();
                        if (confirmation == 1) {
                            System.out.print("informe a quantidade de botijões: ");
                            cylindersQty = scanner.nextInt();
                            scanner.nextLine();
                            totalPrice = Order.calcPrice(cylindersQty);
                        }
                        if (confirmation == 2) {
                            System.out.print("informe um novo endereço: ");
                            scanner.nextLine();
                            address = scanner.nextLine();
                        }
                        System.out.print("informe um cartão para pagamento: ");
                        paymentFormat = scanner.nextLine();
                    } while (confirmation != 1);
                    Order.addToOrderList(Orders, initialHour, finalHour, address, cylindersQty, totalPrice, paymentFormat);
                    System.out.println(Orders);
                    break;
                case 2:
                    System.out.print("informe o número do pedido: ");
                    orderNum = scanner.nextInt();
                    scanner.nextLine();
                    Order.checkingOrder(Orders, orderNum);
                    break;
                case 3:
                    Order.displayConfirmedOrders(Orders);
                    break;
                case 4:
                    Order.displayDeliveredOrders(Orders);
            }
        } while (option != 5);
    }
}
