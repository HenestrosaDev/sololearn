using System;
using System.Linq;

public class AverageWorldLength
{
    static int GetAverageWordLength(string words)
    {
        int wordsNumber = words.Length;
        int totalLength = 0;

        foreach (string word in words)
        {
            foreach (char c in word.ToCharArray())
            {
                if (Char.IsLetter(c))
                {
                    totalLength++;
                }
            }
        }

        int averageLength = (int) Math.Ceiling((double) totalLength / wordsNumber);
        return averageLength;
    }

    static void Main(string[] args)
    {
        string input = Console.ReadLine();
        string[] words = input.Split(' ');

        Console.WriteLine(words);
    }
}
