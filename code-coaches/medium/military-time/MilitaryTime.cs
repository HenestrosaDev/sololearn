using System;

public class Program {

    public static string ConvertFrom12hTo24h(string time12h) {
        int hours, minutes;
        string amPm;

        // parse the input string
        string[] parts = time12h.Split(" ");
        string[] timeParts = parts[0].Split(":");
        hours = int.Parse(timeParts[0]);
        minutes = int.Parse(timeParts[1]);
        amPm = parts[1];

        if (amPm.Equals("PM") && hours != 12) // if it's PM and not 12 PM, add 12 hours
            hours += 12;
        else if (amPm.Equals("AM") && hours == 12) // if it's 12 AM, set hours to 0
            hours = 0;

        return string.Format("{0:D2}:{1:D2}", hours, minutes);
    }

	public static void Main() {
        string time12h = Console.ReadLine();
		Console.WriteLine(ConvertFrom12hTo24h(time12h));
	}

}
