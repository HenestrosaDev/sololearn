import java.util.Scanner;

public class SuperSale {

    public static int getSavings(float[] prices) {
        // Find the index of the most expensive item
        int maxIndex = 0;
        for (int i = 1; i < prices.length; i++) {
            if (prices[i] > prices[maxIndex]) {
                maxIndex = i;
            }
        }

        // Remove the most expensive item by shifting the elements
        float[] updatedPrices = new float[prices.length - 1];
        for (int i = 0, j = 0; i < prices.length; i++) {
            if (i != maxIndex) {
                updatedPrices[j++] = prices[i];
            }
        }

        float discount = 0.3f;
        float savingsPreTax = 0.0f;
        for (float price : updatedPrices) {
            savingsPreTax += price * discount;
        }

        float tax = 1.07f;
        float savingsPostTax = savingsPreTax * tax;

        return (int) Math.floor(savingsPostTax);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine();
        String[] priceStrings = input.split(",");

        float[] prices = new float[priceStrings.length];
        for (int i = 0; i < priceStrings.length; i++) {
            prices[i] = Float.parseFloat(priceStrings[i]);
        }

        System.out.println(getSavings(prices));
    }

}
