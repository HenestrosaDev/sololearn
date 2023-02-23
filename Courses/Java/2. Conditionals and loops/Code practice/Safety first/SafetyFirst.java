import java.util.Scanner;

public class Program {
	public static void main(String[] args) {
		Scanner read = new Scanner(System.in);
		int password = 8819;
		int inputPassword = 0;

		while (inputPassword != password) {
			System.out.println("Write password");
			inputPassword = read.nextInt();
		}
	}
}