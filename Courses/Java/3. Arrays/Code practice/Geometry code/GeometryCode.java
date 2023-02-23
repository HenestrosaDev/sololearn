import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int length = scanner.nextInt();
		int[] sides = new int[length];

		for (int i = 0; i < length; i++) {
			sides[i] = scanner.nextInt();
			System.out.println(sides[i] * sides[i]);
		}

		scanner.close();
	}
}