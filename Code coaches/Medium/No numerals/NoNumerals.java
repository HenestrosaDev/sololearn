import java.util.Scanner;
import java.util.regex.Pattern;
import java.util.regex.Matcher;
import java.util.Map;
import java.util.HashMap;

public class NoNumerals {

	public static void main(String[] args) {
		Map<String, String> numsToWord = new HashMap<String, String>() {
			{
				put("0", "zero");
				put("1", "one");
				put("2", "two");
				put("3", "three");
				put("4", "four");
				put("5", "five");
				put("6", "six");
				put("7", "seven");
				put("8", "eight");
				put("9", "nine");
				put("10", "ten");
			}
		};

		Scanner input = new Scanner(System.in);
		String text = input.nextLine();

		Pattern p = Pattern.compile("\\b\\d+\\b");
		Matcher m = p.matcher(text);
		while (m.find()) {
			if (numsToWord.containsKey(m.group(0))) {
				text = text.replace(m.group(0), numsToWord.get(m.group(0)));
			}
		}

		System.out.println(text);

		input.close();
	}

}
