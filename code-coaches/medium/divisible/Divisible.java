import java.util.Scanner;

public class Divisible {

    public static boolean isDivisibleByAll(int num, String[] dividersString) {
        for (String dividerString : dividersString) {
            int divider = Integer.parseInt(dividerString);
            if (num % divider != 0) {
                return false;
            }
        }

        return true;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int num = scanner.nextInt();
        scanner.nextLine();
        String[] dividersString = scanner.nextLine().split(" ");

        if (isDivisibleByAll(num, dividersString)) {
            System.out.println("divisible by all");
        } else {
            System.out.println("not divisible by all");
        }

        scanner.close();
    }

}
