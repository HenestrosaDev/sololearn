import java.util.Scanner;

public class ThatsOdd {

    public static int sumEvenNumbers(int[] numbers) {
        int sum = 0;
        for (int i = 0; i < numbers.length; i++) {
            if (numbers[i] % 2 == 0) {
                sum += numbers[i];
            }
        }
        return sum;
    }

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
        int numbersNum = scanner.nextInt();
        int[] numbers = new int[numbersNum];

        for (int i = 0; i < numbersNum; i++) {
            numbers[i] = scanner.nextInt();
        }
        scanner.close();

        System.out.println(sumEvenNumbers(numbers));
	}

}
