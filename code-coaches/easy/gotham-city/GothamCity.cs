using System;

class GothamCity
{
    static void Main(string[] args)
    {
        int criminals = int.Parse(Console.ReadLine());

        if (criminals < 5) {
            Console.WriteLine("I got this!");
        } else if (criminals >= 5 && criminals <= 10) {
            Console.WriteLine("Help me Batman");
        } else {
            Console.WriteLine("Good Luck out there!");
        }
    }
}