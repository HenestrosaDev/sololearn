import java.util.Scanner;

public class Program {

    public static String convertFrom12hTo24h(String time12h) {
        int hours, minutes;
        String amPm;

        // parse the input string
        String[] parts = time12h.split(" ");
        String[] timeParts = parts[0].split(":");
        hours = Integer.parseInt(timeParts[0]);
        minutes = Integer.parseInt(timeParts[1]);
        amPm = parts[1];

        if (amPm.equals("PM") && hours != 12) { // if it's PM and not 12 PM, add 12 hours
            hours += 12;
        } else if (amPm.equals("AM") && hours == 12) { // if it's 12 AM, set hours to 0
            hours = 0;
        }

        return String.format("%02d:%02d", hours, minutes);
    }

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		String time12h = input.nextLine();

		System.out.println(convertFrom12hTo24h(time12h));

		input.close();
	}

}
