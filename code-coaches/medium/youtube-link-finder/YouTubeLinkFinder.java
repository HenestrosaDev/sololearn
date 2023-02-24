import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import java.util.List;
import java.util.ArrayList;

public class YouTubeLinkFinder {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		String link = input.nextLine();

		List<String> allMatches = new ArrayList<String>();
		Matcher m = Pattern.compile("[\\/=][\\w-]{11}").matcher(link);

		while (m.find()) {
			allMatches.add(m.group());
		}

		// we take the first match because the id goes before any parameter.
		// substring(1) removes the first character of the string, which is / or =
		String id = allMatches.get(0).substring(1);
		System.out.println(id);

		input.close();
	}

}