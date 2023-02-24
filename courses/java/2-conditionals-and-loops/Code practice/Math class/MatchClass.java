import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int number = scanner.nextInt();
		System.out.println(factorial(number));
	}

	public static int factorial(int num) {
		if (num == 1) {
			return num;
		}

		return num * factorial(num - 1);
	}
}