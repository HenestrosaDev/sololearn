using System;
using System.Collections.Generic;

public class EvenNumbers
{
    static string GetEvensStr(string numsStr)
    {
        string[] numsList = numsStr.Split(' ');
        List<string> evenNumsList = new List<string>();

        foreach (var numStr in numsList)
        {
            int num = int.Parse(numStr);
            if (num % 2 == 0)
            {
                evenNumsList.Add(numStr);
            }
        }

        string evenNumsStr = string.Join(" ", evenNumsList);
        return evenNumsStr;
    }

    static void Main(string[] args)
    {
        string numsStr = Console.ReadLine();
        Console.WriteLine(GetEvensStr(numsStr));
    }
}
