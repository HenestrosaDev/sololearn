using System;

class ExtraTerrestrials
{
    static void Main(string[] args)
    {
        string text = Console.ReadLine();
        char[] chars = text.ToCharArray();
        Array.Reverse(chars);
        string reversedText = new string(chars);
        Console.WriteLine(reversedText);
    }
}