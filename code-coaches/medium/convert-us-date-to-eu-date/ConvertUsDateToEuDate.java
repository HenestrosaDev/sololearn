import java.util.Scanner;
import java.util.HashMap;

public class ConvertUsDateToEuDate {
	
	public static void main(String[] args) {
		HashMap<String, String> monthToNum = new HashMap<String, String>() {
			{
				put("January", "1");
				put("February", "2");
				put("March", "3");
				put("April", "4");
				put("May", "5");
				put("June", "6");
				put("July", "7");
				put("August", "8");
				put("September", "9");
				put("October", "10");
				put("November", "11");
				put("December", "12");
			}
		};
		
		Scanner input = new Scanner(System.in);
		String usDate = input.nextLine();
		String euDate = "";

		if (usDate.contains("/")) {
			String[] usDateSplit = usDate.split("/");
			euDate = usDateSplit[1] + "/" + usDateSplit[0] + "/" + usDateSplit[2];
		} else {
			String[] usDateSplit = usDate.split(" ");
			String month = monthToNum.get(usDateSplit[0]);
			String day = usDateSplit[1].substring(0, usDateSplit[1].length() - 1); // remove ','
			euDate = day + "/" + month + "/" + usDateSplit[2];
		}
		
		System.out.println(euDate);

		input.close();
	}

}
