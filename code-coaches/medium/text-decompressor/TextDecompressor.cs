using System;

public class TextDecompressor
{
    static string DecompressText(string compressedText)
    {
        string decompressedText = "";
        for (int idx = 1; idx < compressedText.Length; idx += 2)
        {
            char character = compressedText[idx - 1];
            int repeatCount = int.Parse(compressedText[idx].ToString());
            decompressedText += new string(character, repeatCount);
        }

        return decompressedText;
    }

    static void Main(string[] args)
    {
        string compressedText = Console.ReadLine();
        Console.WriteLine(DecompressText(compressedText));
    }
}
