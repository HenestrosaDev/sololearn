import java.util.Scanner;

public class DutyFree {

    public static boolean isOnBudget(double[] itemsPriceEur) {
        double usdEurRate = 1.1;
        double limitPriceUsd = 20;

        for (double itemPriceEur : itemsPriceEur) {
            double itemPriceUsd = itemPriceEur * usdEurRate;
            if (itemPriceUsd > limitPriceUsd) {
                return false;
            }
        }

        return true;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Read item prices from standard input
        double[] itemsPriceEur = new double[100];
        int numItems = 0;
        while (scanner.hasNextDouble()) {
            double price = scanner.nextDouble();
            itemsPriceEur[numItems++] = price;
        }

        // Check if on budget and output result
        if (isOnBudget(itemsPriceEur)) {
            System.out.println("On to the terminal");
        } else {
            System.out.println("Back to the store");
        }

        scanner.close();
    }

}
