import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Map;
import java.util.HashMap;
import java.util.Collections;
import java.util.HashSet;
import java.util.Set;

public class TestArrayListNumber {
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
        TestArrayListNumber.cleaningScreen();
        List<Integer> list = new ArrayList<Integer>();

        for (int i = 0; i < 10; i++) {
            int randomNum = (int) (10 + Math.random() * 11);
            list.add(randomNum);
        }

        System.out.println("Generated numbers: " + list);

        List<Integer> processedNums = new ArrayList<>();
        Map<Integer, Integer> repetedNums = new HashMap<>();

        for (Integer numb : list) {
            if (!processedNums.contains(numb)) {
                int firstIndex = list.indexOf(numb);
                int lastIndex = list.lastIndexOf(numb);
                if (firstIndex != lastIndex) {
                    int count = 0;
                    for (Integer num : list) {
                        if (num.equals(numb)) {
                            count++;
                        }
                    }
                    repetedNums.put(numb, count);
                }
            }
            processedNums.add(numb);
        }

        StringBuilder formattedOutput = new StringBuilder();
        formattedOutput.append("{");
        for (Map.Entry<Integer, Integer> entry : repetedNums.entrySet()) {
            formattedOutput.append(entry.getKey()).append(":").append(entry.getValue()).append(", ");
        }
        if (formattedOutput.length() > 1) {
            formattedOutput.setLength(formattedOutput.length() - 2);
        }
        formattedOutput.append("}");

        System.out.println("Generated repeted numbers: " + formattedOutput);

        @SuppressWarnings("unchecked")
        ArrayList<Integer> clonedList = (ArrayList<Integer>) ((ArrayList<Integer>) list).clone();

        System.out.println("Generated clone: " + clonedList);

        Collections.sort(clonedList, Collections.reverseOrder());
        System.out.println("Generated descending sorted numbers: " + clonedList);

        Integer max = Collections.max(list);
        Integer cmax = Collections.max(clonedList);
        System.out.println("The max number of list is: " + max);
        System.out.println("The max number of clonedList is: " + cmax);
        list.removeIf(num -> num.equals(max));
        clonedList.removeIf(num -> num.equals(cmax));
        System.out.println("list after remove max number: " + list);
        System.out.println("clonedList after remove max number: " + clonedList);

        list.addAll(clonedList);
        System.out.println("after join list and clonedList: " + list);

        System.out.println("size: " + list.size());

        int sum = list.stream().mapToInt(Integer::intValue).sum();
        System.out.println("The sum is: " + sum);

        Integer min = Collections.min(list);
        list.removeIf(num -> num.equals(min));
        System.out.println("List after remove min value: " + list);

        Integer[] arr = {1, 2, 3, 4, 5};
        List<Integer> list2 = Arrays.asList(arr);
        System.out.println("List2 after convert array in list: " + list2);

        Set<Integer> numbers = new HashSet<>();

        numbers.add(10);
        numbers.add(20);
        numbers.add(30);
        numbers.add(20); // trying to add an duplicated number

        System.out.println("Element into the HashSet: " + numbers);
    }
}