using System;

public class Hovercraft
{
    public static void Main(string[] args)
    {
        int unitsSold = int.Parse(Console.ReadLine());

        int sellPrice = 3000000;
        int costPrice = 2000000;
        int insurancePrice = 1000000;

        int unitsBuilt = 10;
        int expenses = (unitsBuilt * costPrice) + insurancePrice;
        int benefit = unitsSold * sellPrice;

        if (benefit > expenses)
        {
            Console.WriteLine("Profit");
        }
        else if (benefit < expenses)
        {
            Console.WriteLine("Loss");
        }
        else
        {
            Console.WriteLine("Broke Even");
        }
    }
}
