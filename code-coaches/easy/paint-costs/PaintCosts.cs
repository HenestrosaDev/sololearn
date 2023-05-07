using System;

public class PaintCosts
{
    public static void Main()
    {
        int colorsNumber = Convert.ToInt32(Console.ReadLine());

        double basePrice = 40.0;
        double paintPrice = 5.0;
        double taxPercent = 10.0;

        double subtotal = basePrice + (paintPrice * colorsNumber);
        int total = (int) Math.Ceiling((subtotal / taxPercent) + subtotal);

        Console.WriteLine(total);
    }
}
