import java.util.Scanner;
import java.util.Map;
import java.util.HashMap;

public class ConvertUsDateToEuDate {
	
	public static void main(String[] args) {
		Map<String, String> monthToNum = new HashMap<String, String>() {
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
			String[] usDateSplitted = usDate.split("/");
			euDate = usDateSplitted[1] + "/" + usDateSplitted[0] + "/" + usDateSplitted[2];
		} else {
			String[] usDateSplitted = usDate.split(" ");
			String month = monthToNum.get(usDateSplitted[0]);
			String day = usDateSplitted[1].substring(0, usDateSplitted[1].length() - 1); // remove ','
			euDate = day + "/" + month + "/" + usDateSplitted[2];
		}
		
		System.out.println(euDate);

		input.close();
	}

}
