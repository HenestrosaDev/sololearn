import java.util.Scanner;

public class DejaVu {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);

		String chars = input.nextLine();
		char previousChar = ' ';
		boolean isRepeated = false;

		for(int i = 0; i < chars.length(); i++)
		{
			char c = chars.charAt(i);

			if (c == previousChar) {
				System.out.println("Deja Vu");
				isRepeated = true;
				break;
			} else {
				previousChar = c;
			}
		}
		
		if (!isRepeated) {
			System.out.println("Unique");
		}

		input.close();
	}

}