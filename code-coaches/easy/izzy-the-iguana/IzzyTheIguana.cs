using System;
using System.Collections.Generic;
using System.Linq;

public class IzzyTheIguana
{
    static int GetSnackPoints(List<string> snacks)
    {
        Dictionary<string, int> snacksDict = new Dictionary<string, int>
        {
            { "Mango", 9 },
            { "Lettuce", 5 },
            { "Carrot", 4 },
            { "Cheeseburger", 0 }
        };
        int points = snacks.Sum(snack => snacksDict.GetValueOrDefault(snack, 0));
        return points;
    }

    static void Main(string[] args)
    {
        List<string> snacks = Console.ReadLine().Split().ToList();
        if (GetSnackPoints(snacks) >= 10)
            Console.WriteLine("Come on Down!");
        else
            Console.WriteLine("Time to wait");
    }
}
