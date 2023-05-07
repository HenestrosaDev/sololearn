using System;

public class Argentina
{
    public static void Main(string[] args)
    {
        decimal ars, usd;

        ars = decimal.Parse(Console.ReadLine());
        usd = decimal.Parse(Console.ReadLine());

        decimal arsToUsd = 0.02m;
        decimal convertedUsd = ars * arsToUsd;

        if (convertedUsd > usd)
        {
            Console.WriteLine("Dollars");
        }
        else
        {
            Console.WriteLine("Pesos");
        }
    }
}