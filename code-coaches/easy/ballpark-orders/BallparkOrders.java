import java.util.*;

public class BallparkOrders {

    public static double getTotalCost(List<String> order) {
        Map<String, Double> menu = new HashMap<String, Double>() {
            {
                put("Pizza", 6.0);
                put("Nachos", 6.0);
                put("Cheeseburger", 10.0);
                put("Water", 4.0);
                put("Coke", 5.0);
            }
        };

        double subtotal = order.stream()
            .mapToDouble(item -> menu.getOrDefault(item, 5.0))
            .sum();
        double tax = 1.07;
        double total = subtotal * tax;

        return Math.round(total * 100.0) / 100.0; // round to 2 decimals
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        List<String> order = Arrays.asList(scanner.nextLine().split(" "));

        System.out.println(getTotalCost(order));

        scanner.close();
    }

}
