import java.util.List;

public class Order {
    private static int counter = 0;
    private String initialHour;
    private String finalHour;
    private String address;
    private String status;
    private String paymentFormat;
    private int quantity;
    private int id;
    private float totalPrice;

    public Order(String initialHour, String finalHour, String address, int quantity, float totalPrice, String paymentFormat) {
        this.initialHour = initialHour;
        this.finalHour = finalHour;
        this.address = address;
        this.quantity = quantity;
        this.totalPrice = totalPrice;
        this.paymentFormat = paymentFormat;
        status = "Pendente";
        counter++;
        id = counter;
    }

    public String getHour() {
        return initialHour;
    }

    public void setHour(String initialHour) {
        this.initialHour = initialHour;
    }

    public String getAddress() {
        return address;
    }

    public void setAddress(String address) {
        this.address = address;
    }

    public String getStatus() {
        return status;
    }

    public void setStatus(String status) {
        this.status = status;
    }

    public int getQuantity() {
        return quantity;
    }

    public void setQuantity(int quantity) {
        this.quantity = quantity;
    }

    public float getPrice() {
        return totalPrice;
    }

    public void setPrice(float totalPrice) {
        this.totalPrice = totalPrice;
    }

    public String getFinalHour() {
        return finalHour;
    }

    public void setFinalHour(String finalHour) {
        this.finalHour = finalHour;
    }

    public String getPaymentFormat() {
        return paymentFormat;
    }

    public void setPaymentFormat(String paymentFormat) {
        this.paymentFormat = paymentFormat;
    }

    public int getId() {
        return id;
    }

    public static String calcFinalHour(String initialHour) {
        String finalHour;
        boolean isTomorrow = false;
        String time = initialHour;
        String[] parts = time.split("h");
        int hours = Integer.parseInt(parts[0]);
        int minutes = 0;
        if (parts.length > 1 && !parts[1].isEmpty()) {
            minutes = Integer.parseInt(parts[1]);
        }
        float timeInHours = hours + (minutes / 60f);
        float finalTimeInHours = timeInHours + 6;
        if (finalTimeInHours >= 24) {
            finalTimeInHours -= 24;
            isTomorrow = true;
        }
        hours = (int) finalTimeInHours;
        float finalMinutes = (finalTimeInHours - hours) * 60;
        minutes = (int) finalMinutes;
        if (isTomorrow) {
            finalHour = hours + "h" + minutes + " de amanhã";
        } else {
            finalHour = hours + "h" + minutes;
        }
        return finalHour;
    }

     public static float calcPrice(int cylindersQty) {
        return cylindersQty * 93;
    }

    public static void addToOrderList(List<Order> Orders, String initialHour, String finalHour, String address, int cylindersQty, float totalPrice, String paymentFormat) {
        Order order = new Order(initialHour, finalHour, address, cylindersQty, totalPrice, paymentFormat);
        order.setStatus("Confirmado");
        Orders.add(order);
    }

    public static void checkingOrder(List<Order> Orders, int orderNum) {
        boolean wasDelivered = false;
        for (Order order : Orders) {
            if (order.getId() == orderNum) {
                order.setStatus("Entregue");
                System.out.println("Entrega confirmada");
                wasDelivered = true;
                break;
            }
        }
        if (!wasDelivered) {
            System.out.println("Pedido não localizado");
        }
    }

    public static void displayConfirmedOrders(List<Order> Orders) {
        boolean hasConfirmed = false;
        for (Order order : Orders) {
            if (order.getStatus() == "Confirmado") {
                System.out.println(order.getId());
                hasConfirmed = true;
            }
        }
        if (!hasConfirmed) {
            System.out.println("Nenhum Pedido Confirmado");
        }
    }

    public static void displayDeliveredOrders(List<Order> Orders) {
        boolean hasDelivered = false;
        for (Order order : Orders) {
            if (order.getStatus() == "Entregue") {
                System.out.println(order.getId());
                hasDelivered = true;
            }
        }
        if (!hasDelivered) {
            System.out.println("Nenhum Pedido Entregue");
        }
    }

    @Override
    public String toString() {
        return "Order [initialHour=" + initialHour + ", finalHour=" + finalHour + ", address=" + address + ", status=" + status + ", paymentFormat=" + paymentFormat + ", quantity=" + quantity + ", id=" + id + ", totalPrice=" + totalPrice + "]";
    }

    
}