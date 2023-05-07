import java.util.Scanner;

public class Hovercraft {

	public static String hovercraftProfitStatus(int unitsSold) {
	    int sellPrice = 3000000;
		int costPrice = 2000000;
		int insurancePrice = 1000000;

		int unitsBuilt = 10;
		int expenses = (unitsBuilt * costPrice) + insurancePrice;
		int revenue = unitsSold * sellPrice;

		if (revenue > expenses)
			return "Profit";
		else if (revenue < expenses)
			return "Loss";
		else
			return "Broke Even";
	}

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int unitsSold = input.nextInt();

		System.out.println(hovercraftProfitStatus(unitsSold));

		input.close();
	}

}
