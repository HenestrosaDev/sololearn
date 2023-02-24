import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import java.util.List;
import java.util.ArrayList;

public class Program {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);

		String time = input.nextLine();
		String dayPeriod = "";

		List<String> matchedDayPeriod = new ArrayList<String>();
		Matcher m = Pattern.compile("\\s[a-zA-Z]{2}").matcher(time);

		while (m.find()) {
			matchedDayPeriod.add(m.group());
		}

		if (!matchedDayPeriod.isEmpty()) {
			// position 0 because we know that it will be the first occurrence
			time = time.replace(matchedDayPeriod.get(0), "");
			dayPeriod = matchedDayPeriod.get(0).trim().toUpperCase();
		}

		String[] timeSplitted = time.split(":");
		String hours = timeSplitted[0];
		String minutes = timeSplitted[1];

		if (hours.length() == 1) {
			hours = String.format("0%s", hours);
		}
		int hoursInt = Integer.parseInt(hours);
		
		if (dayPeriod.equals("PM")) {
			hours = String.valueOf(hoursInt + 12);
		} else if (!dayPeriod.equals("AM")) {
			if (hoursInt > 12) {
				hours = String.valueOf(hoursInt - 12);
				minutes += " PM";
			} else {
				minutes += " AM";
			}
		}

		System.out.println(String.format("%s:%s", hours, minutes));

		input.close();
	}

}
