import java.util.Scanner;

public class PigLatin {

    static String toPigLatin(String sentence) {
        String[] words = sentence.split(" ");
        String result = "";

        for (String word : words) {
            String firstLetter = word.substring(0, 1);
            String restOfWord = word.substring(1);
            result += restOfWord + firstLetter + "ay ";
        }

        return result.trim();
    }

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		String sentence = input.nextLine();

		System.out.println(toPigLatin(sentence));

		input.close();
	}

}