using System;
using System.Collections.Generic;

public class SnapCrackleAndPop
{
    static string GetSound(int numRiceKrispies)
    {
        if (numRiceKrispies % 3 == 0)
            return "Pop";
        else if (numRiceKrispies % 2 != 0)
            return "Snap";
        else
            return "Crackle";
    }

    static void Main(string[] args)
    {
        List<int> numRiceKrispiesList = new List<int>();
        for (int i = 0; i < 6; i++)
        {
            int num = int.Parse(Console.ReadLine());
            numRiceKrispiesList.Add(num);
        }

        List<string> sounds = new List<string>();
        foreach (int num in numRiceKrispiesList)
        {
            string sound = GetSound(num);
            sounds.Add(sound);
        }

        Console.WriteLine(string.Join(" ", sounds));
    }
}
