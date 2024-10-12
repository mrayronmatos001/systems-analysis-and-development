import java.util.ArrayList;
import java.util.Collections;

public class Colors {

    public static void changeList(ArrayList<String> list, int index, String color) {
        list.set(index, color);
    }

    public static void clearScreen() {
        try {
            if(System.getProperty("os.name").contains("Windows")) {
                new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor();
            } else {
                System.out.println("\033[H\033[2J");
                System.out.flush();
            }
        } catch (Exception e) {
            System.out.println("Error when while trying clean the screen: " + e.getMessage());
        }
    }

    public static void main(String[] args) {
        Colors.clearScreen();
        ArrayList<String> list = new ArrayList<>();

        list.add("VERDE");
        list.add("AZUL");
        list.add("VERMELHO");   
        list.add("AMARELO");
        list.add("CINZA");  
        
        list.remove(2);
        System.out.println("Lista após exclusão: " + list);

        Collections.sort(list);
        System.out.println("Lista após ordenação: " + list);

        Colors.changeList(list, 2, "BRANCO");
        System.out.println("Lista após a atualização: " + list + "\n");
    }
}
