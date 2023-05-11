using System;

public class GuardFlamingos
{
    static void Main(string[] args)
    {
        int yardLength = int.Parse(Console.ReadLine());
        int yardWidth = int.Parse(Console.ReadLine());
        int flamingosToPurchase = yardLength + yardWidth;
        Console.WriteLine(flamingosToPurchase);
    }
}