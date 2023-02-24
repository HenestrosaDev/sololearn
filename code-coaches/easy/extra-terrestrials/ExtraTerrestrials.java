import java.util.Scanner;

public class ExtraTerrestrials {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		String text = input.nextLine();
		System.out.println(new StringBuilder(text).reverse().toString());

		input.close();
	}
	
}
