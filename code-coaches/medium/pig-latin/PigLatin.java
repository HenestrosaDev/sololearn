import java.util.Scanner;

public class PigLatin {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		String[] words = input.nextLine().split(" ");

		for (String word : words) {
			StringBuilder sb = new StringBuilder(word);
			sb.append(word.charAt(0) + "ay");
			sb.delete(0, 1);
			System.out.print(sb + " ");
		}

		input.close();
	}

}