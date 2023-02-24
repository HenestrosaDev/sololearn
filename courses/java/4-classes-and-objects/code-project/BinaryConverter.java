import java.util.Scanner;

public class Program {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int x = sc.nextInt();
		System.out.print(Converter.toBinary(x));

		sc.close();
	}
}

public class Converter {
	public static String toBinary(int num) {
		String binary = "";
		while (num > 0) {
			binary = (num % 2) + binary;
			num /= 2;
		}
		return binary;
	}
}