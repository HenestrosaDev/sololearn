using System;

public class Hovercraft
{
    public static string hovercraftProfitStatus(int unitsSold)
    {
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

    public static void Main(string[] args)
    {
        int unitsSold = int.Parse(Console.ReadLine());
        Console.WriteLine(hovercraftProfitStatus(unitsSold));
    }
}
