using System;

public class TaxFree
{
    static float GetTotal(int[] prices)
    {
        float tax = 1.07f;
        float total = 0f;
        foreach (int price in prices)
        {
            total += (price < 20) ? price * tax : price;
        }
        float totalRounded = (float)Math.Round(total * 100) / 100;
        return totalRounded;
    }

    static void Main(string[] args)
    {
        string input = Console.ReadLine();
        string[] priceStrings = input.Split(',');

        int[] prices = new int[priceStrings.Length];
        for (int i = 0; i < priceStrings.Length; i++)
        {
            prices[i] = int.Parse(priceStrings[i]);
        }

        Console.WriteLine($"{GetTotal(prices):F2}");
    }
}
