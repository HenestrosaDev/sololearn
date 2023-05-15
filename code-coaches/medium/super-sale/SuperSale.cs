using System;

public class SuperSale
{
    static int GetSavings(float[] prices)
    {
        // Find the index of the most expensive item
        int maxIndex = 0;
        for (int i = 1; i < prices.Length; i++)
        {
            if (prices[i] > prices[maxIndex])
            {
                maxIndex = i;
            }
        }

        // Remove the most expensive item by shifting the elements
        float[] updatedPrices = new float[prices.Length - 1];
        for (int i = 0, j = 0; i < prices.Length; i++)
        {
            if (i != maxIndex)
            {
                updatedPrices[j++] = prices[i];
            }
        }

        float discount = 0.3f;
        float savingsPreTax = 0.0f;
        foreach (float price in updatedPrices)
        {
            savingsPreTax += price * discount;
        }

        float tax = 1.07f;
        float savingsPostTax = savingsPreTax * tax;

        return (int)Math.Floor(savingsPostTax);
    }

    static void Main(string[] args)
    {
        string input = Console.ReadLine();
        string[] priceStrings = input.Split(',');

        float[] prices = new float[priceStrings.Length];
        for (int i = 0; i < priceStrings.Length; i++)
        {
            prices[i] = float.Parse(priceStrings[i]);
        }

        Console.WriteLine(GetSavings(prices));
    }
}
