import java.util.Scanner;

public class GothamCity {

    public static String isBackupNeeded(int criminals) {
        if (criminals < 5)
            return "I got this!";
        else if (criminals >= 5 && criminals <= 10)
            return "Help me Batman";
        else
            return "Good Luck out there!";
    }

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int criminals = input.nextInt();

		System.out.println(isBackupNeeded(criminals));

		input.close();
	}

}
