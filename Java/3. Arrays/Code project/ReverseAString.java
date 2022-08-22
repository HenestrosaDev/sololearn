import java.util.Scanner;

public class ReverseAString {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String text = sc.nextLine();
		char[] charArrayText = text.toCharArray();

		for (int i = charArrayText.length - 1; i >= 0; i--) {
			System.out.print(charArrayText[i]);
		}

		sc.close();
	}
}