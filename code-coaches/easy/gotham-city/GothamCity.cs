using System;

public class GothamCity
{
    static string IsBackupNeeded(int criminals)
    {
        if (criminals < 5)
            return "I got this!";
        else if (criminals >= 5 && criminals <= 10)
            return "Help me Batman";
        else
            return "Good Luck out there!";
    }

    static void Main(string[] args)
    {
        int criminals = int.Parse(Console.ReadLine());
        Console.WriteLine(IsBackupNeeded(criminals));
    }
}