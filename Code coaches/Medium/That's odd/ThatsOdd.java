import java.util.Scanner;
import java.util.stream.IntStream;

public class ThatsOdd {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int length = input.nextInt();
		int[] numbers = new int[length];

		for (int i = 0; i < length; i++) {
			int number = input.nextInt();
			if (number % 2 == 0) {
				numbers[i] = number;
			}
		}

		int sum = IntStream.of(numbers).sum();
		System.out.println(sum);

		input.close();
	}

}
