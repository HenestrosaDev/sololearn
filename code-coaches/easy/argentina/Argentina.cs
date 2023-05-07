using System;

public class Argentina
{
    public static string lowerCurrencyAfterConversion(decimal ars, decimal usd)
    {
        decimal arsToUsd = 0.02m;
        decimal convertedUsd = ars * arsToUsd;

        if (convertedUsd > usd)
            return "Dollars";
        else
            return "Pesos";
    }

    public static void Main(string[] args)
    {
        decimal ars, usd;

        ars = decimal.Parse(Console.ReadLine());
        usd = decimal.Parse(Console.ReadLine());

        Console.WriteLine(lowerCurrencyAfterConversion(ars, usd));
    }
}