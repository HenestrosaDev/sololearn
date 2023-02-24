import java.util.Scanner;

public class TheSpyLife {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		String encoded = input.nextLine();
		String decoded = "";

		for (char c : encoded.toCharArray()) {
			if (Character.isLetter(c) || Character.isWhitespace(c)) {
				decoded += c;
			}
		}

		decoded = new StringBuilder(decoded).reverse().toString();
		System.out.println(decoded);

		input.close();
	}

}