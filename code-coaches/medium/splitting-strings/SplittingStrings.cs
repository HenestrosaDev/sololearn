using System;

public class SplittingStrings
{
    static string SplitString(string word, int numParts, string separator = "-")
    {
        string[] parts = new string[(int)Math.Ceiling((double)word.Length / numParts)];
        for (int i = 0; i < parts.Length; i++)
        {
            int startIndex = i * numParts;
            int length = Math.Min(numParts, word.Length - startIndex);
            parts[i] = word.Substring(startIndex, length);
        }
        return string.Join(separator, parts);
    }

    static void Main(string[] args)
    {
        string word = Console.ReadLine();
        int numParts = int.Parse(Console.ReadLine());
        Console.WriteLine(SplitString(word, numParts));
    }
}
