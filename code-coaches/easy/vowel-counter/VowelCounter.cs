using System;

public class VowelCounter
{
    static int GetVowelsCount(string sentence)
    {
        string vowels = "aeiou";
        int count = 0;
        foreach (char c in sentence.ToLower())
        {
            if (vowels.Contains(c))
                count++;
        }

        return count;
    }

    static void Main(string[] args)
    {
        string sentence = Console.ReadLine();
        Console.WriteLine(GetVowelsCount(sentence));
    }
}
