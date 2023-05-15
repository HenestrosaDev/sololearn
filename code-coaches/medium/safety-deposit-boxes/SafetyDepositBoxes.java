import java.util.Scanner;

public class SafetyDepositBoxes {

    public static int calculateTimeToGetItem(String[] items, String itemToFind) {
        int time = 5;
        for (String item : items) {
            if (!item.equals(itemToFind)) {
                time += 5;
            } else {
                break;
            }
        }

        return time;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String[] items = scanner.nextLine().split(",");
        String itemToFind = scanner.nextLine();

        System.out.println(calculateTimeToGetItem(items, itemToFind));

        scanner.close();
    }

}
