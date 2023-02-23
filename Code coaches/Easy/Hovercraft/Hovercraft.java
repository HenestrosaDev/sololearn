import java.util.Scanner;

public class Hovercraft {
	
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int unitsSold = input.nextInt();

		int sellPrice = 3000000;
		int costPrice = 2000000;
		int insurancePrice = 1000000;

		int unitsBuilt = 10;
		int expenses = (unitsBuilt * costPrice) + insurancePrice;
		int benefit = unitsSold * sellPrice;

		if (benefit > expenses)
		{
			System.out.println("Profit");
		}
		else if (benefit < expenses)
		{
			System.out.println("Loss");
		}
		else
		{
			System.out.println("Broke Even");
		}

		input.close();
	}

}
