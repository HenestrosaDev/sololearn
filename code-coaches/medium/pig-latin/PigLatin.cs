using System;

public class PigLatin
{
    static string ToPigLatin(string sentence)
    {
        string[] words = sentence.Split(' ');
        string result = "";

        foreach (string word in words)
        {
            string firstLetter = word.Substring(0, 1);
            string restOfWord = word.Substring(1);
            result += restOfWord + firstLetter + "ay ";
        }

        return result.Trim();
    }

    static void Main(string[] args)
    {
        string sentence = Console.ReadLine();
        Console.WriteLine(ToPigLatin(sentence));
    }
}
