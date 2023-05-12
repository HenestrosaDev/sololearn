using System;

public class ExtraTerrestrials
{
    static string ReverseText(string text)
    {
        char[] chars = text.ToCharArray();
        Array.Reverse(chars);
        string reversedText = new string(chars);
        return reversedText;
    }

    static void Main(string[] args)
    {
        string text = Console.ReadLine();
        Console.WriteLine(ReverseText(text));
    }
}