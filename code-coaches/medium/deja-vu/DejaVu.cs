using System;

public class DejaVu
{
    static void CheckDejaVu(string chars)
    {
        char previousChar = ' ';
        bool isRepeated = false;

        for (int i = 0; i < chars.Length; i++)
        {
            char c = chars[i];

            if (c == previousChar)
            {
                Console.WriteLine("Deja Vu");
                isRepeated = true;
                break;
            }
            else
            {
                previousChar = c;
            }
        }

        if (!isRepeated)
        {
            Console.WriteLine("Unique");
        }
    }

    static void Main(string[] args)
    {
        string chars = Console.ReadLine();
        CheckDejaVu(chars);
    }
}
