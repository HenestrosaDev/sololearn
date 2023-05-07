import java.util.Scanner;

public class ExtraTerrestrials {

    public static String reversedText(String text) {
        StringBuilder sb = new StringBuilder(text);
        sb.reverse();
        return sb.toString();
    }

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		String text = input.nextLine();

		System.out.println(reversedText(text));

		input.close();
	}
	
}
