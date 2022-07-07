import java.util.Scanner;

public class Symbols {
	
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		String encoded = input.nextLine();
		String decoded = "";

		for (char c : encoded.toCharArray()) {
			if (Character.isLetterOrDigit(c) || Character.isWhitespace(c)) {
				decoded += c;
			}
		}

		System.out.println(decoded);

		input.close();
	}

}
