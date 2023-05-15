import java.util.Scanner;

public class SnowballingNumbers {

    public static boolean isEachNumberGreaterThanSum(int[] numbers) {
        int sum = 0;
        for (int i = 1; i < numbers.length; i++) {
            sum += numbers[i - 1];
            if (numbers[i] <= sum) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int numbersLength = scanner.nextInt();
        int[] numbers = new int[numbersLength];

        for (int i = 0; i < numbersLength; i++) {
            numbers[i] = scanner.nextInt();
        }

        System.out.println(isEachNumberGreaterThanSum(numbers));

        scanner.close();
    }

}
