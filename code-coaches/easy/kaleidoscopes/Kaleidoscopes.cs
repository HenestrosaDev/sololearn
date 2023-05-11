using System;

public class Kaleidoscopes
{
	static double GetTotal(int numKaleidoscopes)
	{
	    double price = 5.0;
        double tax = 1.07;
        double subtotal = price;

        if (numKaleidoscopes > 1)
        {
            double discount = 0.9;
            subtotal = (double) numKaleidoscopes * price * discount;
        }

        double total = subtotal * tax;

        return Math.Round(total, 2, MidpointRounding.AwayFromZero);
	}

	static void Main(string[] args) {
		int numKaleidoscopes = int.Parse(Console.ReadLine());
		Console.WriteLine(GetTotal(numKaleidoscopes));
	}

}
