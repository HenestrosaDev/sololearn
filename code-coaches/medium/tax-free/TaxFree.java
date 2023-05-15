import java.util.Scanner;

public class TaxFree {

    public static float getTotal(int[] prices) {
        float tax = 1.07f;
        float total = 0f;
        for (int price : prices) {
            total += (price < 20) ? price * tax : price;
        }
        float totalRounded = (float) Math.round(total * 100) / 100;
        return totalRounded;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine();
        String[] priceStrings = input.split(",");

        int[] prices = new int[priceStrings.length];
        for (int i = 0; i < priceStrings.length; i++) {
            prices[i] = Integer.parseInt(priceStrings[i]);
        }

        System.out.printf("%.2f%n", getTotal(prices));

        scanner.close();
    }

}
