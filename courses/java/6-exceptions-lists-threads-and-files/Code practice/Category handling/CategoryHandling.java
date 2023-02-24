import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		String[] categories = {
				"PCs",
				"Notebooks",
				"Tablets",
				"Phones",
				"Аccessories"
		};

		Scanner scanner = new Scanner(System.in);
		int choice = scanner.nextInt();

		try {
			System.out.println(categories[choice]);
		} catch (Exception ex) {
			System.out.println("Wrong Option");
		}
	}
}