import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner read = new Scanner(System.in);
		int numberOfPeople = read.nextInt();

		for (int i = 0; i < numberOfPeople; i++) {
			welcome();
		}
		
		read.close();
	}

	public static void welcome() {
		System.out.println("Welcome!");
	}
}