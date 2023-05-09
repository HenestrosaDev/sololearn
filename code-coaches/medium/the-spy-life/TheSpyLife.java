import java.util.Scanner;

public class TheSpyLife {

    public static String decodeMessage(String message) {
        StringBuilder decodedMessage = new StringBuilder();

		for (char c : message.toCharArray()) {
			if (Character.isLetter(c) || Character.isWhitespace(c)) {
				decodedMessage.append(c);
			}
		}

		String flippedDecodedMessage = new StringBuilder(decodedMessage).reverse().toString();
		return flippedDecodedMessage;
    }

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		String encodedMessage = input.nextLine();

		System.out.println(decodeMessage(encodedMessage));

		input.close();
	}

}