import java.util.*;

public class Main {
    public static int getSnackPoints(List<String> snacks) {
        Map<String, Integer> snacksDict = new HashMap<>();
        snacksDict.put("Mango", 9);
        snacksDict.put("Lettuce", 5);
        snacksDict.put("Carrot", 4);
        snacksDict.put("Cheeseburger", 0);

        int points = snacks.stream().mapToInt(snack -> snacksDict.getOrDefault(snack, 0)).sum();
        return points;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        List<String> snacks = Arrays.asList(scanner.nextLine().split("\\s+"));

        if (getSnackPoints(snacks) >= 10)
            System.out.println("Come on Down!");
        else
            System.out.println("Time to wait");

        scanner.close();
    }
}
