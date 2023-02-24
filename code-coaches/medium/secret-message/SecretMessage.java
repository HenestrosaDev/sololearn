import java.util.Scanner;

public class SecretMessage {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		String text = input.nextLine();
		String textInvertedAscii = "";

		for (char c : text.toCharArray()) {
			if (Character.isLetter(c)) {
				int asciiLowA = 97;
				int asciiLowZ = 122;
				textInvertedAscii += Character.toString(asciiLowZ - (int) Character.toLowerCase(c) + asciiLowA);
			} else {
				textInvertedAscii += c;
			}
		}

		System.out.println(textInvertedAscii);

		input.close();
	}

}
