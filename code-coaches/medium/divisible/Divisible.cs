using System;

public class Divisible
{
    static bool IsDivisibleByAll(int num, String[] dividersString)
    {
        foreach (string dividerString in dividersString)
        {
            int divider = int.Parse(dividerString);
            if (num % divider != 0)
            {
                return false;
            }
        }

        return true;
    }

    static void Main(string[] args)
    {
        int num = int.Parse(Console.ReadLine());
        string[] dividersString = Console.ReadLine().Split(' ');

        if (IsDivisibleByAll(num, dividersString))
            Console.WriteLine("divisible by all");
        else
            Console.WriteLine("not divisible by all");
    }
}
