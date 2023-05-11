using System;
using System.Linq;

public class IsogramDetector
{
    static bool IsIsogram(string word)
    {
        return word.ToLower().Distinct().Count() == word.Length;
	}

    static void Main(string[] args)
    {
        string word = Console.ReadLine();
        if (IsIsogram(word))
            Console.WriteLine("true");
        else
            Console.WriteLine("false");
    }
}
