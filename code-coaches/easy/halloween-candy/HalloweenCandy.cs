using System;

public class HalloweenCandy
{
    static void Main(string[] args)
    {
        int houses;

        do
        {
            houses = Convert.ToInt32(Console.ReadLine());
        }
        while (houses < 3);

        int billProbability = (int) Math.Ceiling(100.0 / houses * 2);
        Console.WriteLine(billProbability);
    }
}