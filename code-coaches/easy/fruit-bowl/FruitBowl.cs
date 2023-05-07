using System;

class FruitBowl
{
    static int GetApplePies(int fruitCount)
    {
        int appleCount = fruitCount / 2;
        return appleCount / 3;
    }

    static void Main(string[] args)
    {
        int fruitCount = Convert.ToInt32(Console.ReadLine());
        Console.WriteLine(GetApplePies(fruitCount));
    }
}