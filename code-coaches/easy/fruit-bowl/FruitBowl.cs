using System;

class FruitBowl
{
    static void Main(string[] args)
    {
        int fruit = Convert.ToInt32(Console.ReadLine());
        int apples = fruit / 2;
        int pies = apples / 3;

        Console.WriteLine(pies);
    }
}