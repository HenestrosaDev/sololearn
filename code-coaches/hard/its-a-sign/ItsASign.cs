using System;
using System.Collections.Generic;

class ItsASign
{
    static bool IsPalindrome(string word)
    {
        char[] charArray = word.ToCharArray();
        Array.Reverse(charArray);
        string reversedWord = new string(charArray);

        return word == reversedWord;
    }

    static bool ContainsPalindrome(List<string> words)
    {
        foreach (string word in words)
        {
            if (IsPalindrome(word))
            {
                return true;
            }
        }

        return false;
    }

    static void Main()
    {
        List<string> words = new List<string>();

        for (int i = 0; i < 4; i++)
        {
            string word = Console.ReadLine();
            words.Add(word);
        }

        if (ContainsPalindrome(words))
            Console.WriteLine("Open");
        else
            Console.WriteLine("Trash");
    }
}
