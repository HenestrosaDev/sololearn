using System;

public class Hovercraft
{
    static string hHvercraftProfitStatus(int unitsSold)
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

    static void Main(string[] args)
    {
        int unitsSold = int.Parse(Console.ReadLine());
        Console.WriteLine(hHvercraftProfitStatus(unitsSold));
    }
}
