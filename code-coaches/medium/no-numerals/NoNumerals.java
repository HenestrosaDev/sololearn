import java.util.Scanner;
import java.util.regex.Pattern;
import java.util.regex.Matcher;
import java.util.Map;
import java.util.HashMap;

public class NoNumerals {

    public static String replaceNumbersWithWords(String phrase) {
        String[] numberWords = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};

        String[] words = phrase.split(" ");
        String[] updatedWords = new String[words.length];
        for (int i = 0; i < words.length; i++) {
            if (words[i].matches("\\d+") && Integer.parseInt(words[i]) <= 10) {
                updatedWords[i] = numberWords[Integer.parseInt(words[i])];
            } else {
                updatedWords[i] = words[i];
            }
        }

        return String.join(" ", updatedWords);
    }

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		String sentence = input.nextLine();

		System.out.println(replaceNumbersWithWords(sentence));

		input.close();
	}

}
