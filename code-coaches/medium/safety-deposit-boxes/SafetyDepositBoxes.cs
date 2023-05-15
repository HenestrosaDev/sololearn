using System;

public class SafetyDepositBoxes
{
    static int CalculateTimeToGetItem(string[] items, string itemToFind)
    {
        int time = 5;
        foreach (string item in items)
        {
            if (item != itemToFind)
                time += 5;
            else
                break;
        }

        return time;
    }

    static void Main(string[] args)
    {
        string[] items = Console.ReadLine().Split(',');
        string itemToFind = Console.ReadLine();

        Console.WriteLine(CalculateTimeToGetItem(items, itemToFind));
    }
}
