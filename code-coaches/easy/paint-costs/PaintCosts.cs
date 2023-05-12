using System;

public class PaintCosts
{
    static int GetTotalPaintCosts(int numColors)
    {
        double basePrice = 40.0;
        double paintPrice = 5.0;
        double taxPercent = 10.0;

        double subtotal = basePrice + (paintPrice * colorsNumber);
        int total = (int) Math.Ceiling((subtotal / taxPercent) + subtotal);

        return total;
    }

    static void Main(string[] args)
    {
        int numColors = Convert.ToInt32(Console.ReadLine());
        Console.WriteLine(GetTotalPaintCosts(numColors));
    }
}
