import java.util.Scanner;
import java.util.InputMismatchException;

public class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);

		try {
			int num1 = scanner.nextInt();
			int num2 = scanner.nextInt();
			int result = num1 / num2;
			System.out.println(result);
		} catch (ArithmeticException ex) {
			System.out.println("Mistake: division by zero");
		} catch (InputMismatchException ex) {
			System.out.println("Mistake: wrong value type");
		}

		scanner.close();
	}
}