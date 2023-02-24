import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int emotion = scanner.nextInt();

		switch (emotion) {
			case 1:
				System.out.println("You are happy!");
				break;
			case 2:
				System.out.println("You are sad!");
				break;
			case 3:
				System.out.println("You are angry!");
				break;
			case 4:
				System.out.println("You are surprised!");
				break;
			default:
				System.out.println("Unknown emotion.");
		}
	}
}