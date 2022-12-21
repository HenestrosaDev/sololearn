import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int length = scanner.nextInt();
		int[] array = new int[length];
		int sumOfMultiplesOf4 = 0;

		for (int i = 0; i < length; i++) {
			int number = scanner.nextInt();
			array[i] = number;
			if (number % 4 == 0) {
				sumOfMultiplesOf4 += number;
			}
		}

		System.out.println(sumOfMultiplesOf4);
		scanner.close();
	}
}