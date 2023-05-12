using System;

public class Neverland
{
    static void Main(string[] args)
    {
        int initialAge = int.Parse(Console.ReadLine());
        int yearsPassed = int.Parse(Console.ReadLine());
        int finalAge = initialAge + yearsPassed;

        Console.WriteLine($"My twin is {finalAge} years old and they are {yearsPassed} years older than me");
    }
}
