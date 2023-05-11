using System;
using System.Linq;

class NoNumerals
{
    static string ReplaceNumbersWithWords(string sentence)
    {
        string[] numberWords = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};

        string[] words = sentence.Split();
        string[] updatedWords = words.Select(word =>
            int.TryParse(word, out int number) && number <= 10 ? numberWords[number] : word
        ).ToArray();

        return string.Join(" ", updatedWords);
    }

    static void Main(string[] args)
    {
        string sentence = Console.ReadLine();
        Console.WriteLine(ReplaceNumbersWithWords(sentence));
    }
}
