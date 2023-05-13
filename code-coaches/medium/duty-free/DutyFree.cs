using System;

public class DutyFree
{
    static bool IsOnBudget(double[] itemsPriceEur)
    {
        double usdEurRate = 1.1;
        double limitPriceUsd = 20;

        foreach (double itemPriceEur in itemsPriceEur)
        {
            double itemPriceUsd = itemPriceEur * usdEurRate;
            if (itemPriceUsd > limitPriceUsd)
            {
                return false;
            }
        }

        return true;
    }

    static void Main(string[] args)
    {
        // Read item prices from standard input
        string[] input = Console.ReadLine().Split();
        double[] itemsPriceEur = Array.ConvertAll(input, double.Parse);

        // Check if on budget and output result
        if (IsOnBudget(itemsPriceEur))
            Console.WriteLine("On to the terminal");
        else
            Console.WriteLine("Back to the store");
    }
}
