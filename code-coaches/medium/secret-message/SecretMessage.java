import java.util.Scanner;

public class SecretMessage {

    public static String encodeMessage(String message) {
        String textInvertedAscii = "";
        int asciiLowercaseA = 97;
        int asciiLowercaseZ = 122;

		for (char character : message.toCharArray()) {
			if (Character.isLetter(character)) {
				textInvertedAscii += Character.toString(asciiLowercaseZ - (int) Character.toLowerCase(character) + asciiLowercaseA);
			} else {
				textInvertedAscii += character;
			}
		}

		return textInvertedAscii;
    }

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		String message = input.nextLine();

		System.out.println(encodeMessage(message));

		input.close();
	}

}
