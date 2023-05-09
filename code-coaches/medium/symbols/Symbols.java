import java.util.Scanner;

public class Symbols {

	public static String removeSymbols(String encoded) {
	    // symbols: a char that is not alphanumeric or a space
	    String decoded = "";

		for (char c : encoded.toCharArray()) {
			if (Character.isLetterOrDigit(c) || Character.isWhitespace(c)) {
				decoded += c;
			}
		}

		return decoded;
	}

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		String encoded = input.nextLine();

		System.out.println(removeSymbols(encoded));

		input.close();
	}

}
