import java.util.Scanner;
import java.lang.Math;

class Main {
	public static void main(String[] args) {
		Scanner read = new Scanner(System.in);
		int num1 = read.nextInt();
		int num2 = read.nextInt();

		double result = Math.pow(num1, num2);
		System.out.println(result);

		read.close();
	}
}