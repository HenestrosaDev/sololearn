using System;
using System.Linq;

class AverageWorldLength
{
    static void Main(string[] args)
    {
        string input = Console.ReadLine();
        string[] words = input.Split(' ');

        int wordsNumber = 0;
        int totalLength = 0;

        foreach (string word in words)
        {
            wordsNumber++;
            foreach (char c in word.ToCharArray())
            {
                if (Char.IsLetter(c))
                {
                    totalLength++;
                }
            }
        }

        int averageLength = (int)Math.Ceiling((double)totalLength / wordsNumber);
        Console.WriteLine(averageLength);
    }
}
