using System;

public class SecretMessage
{
    static string EncodeMessage(string message)
    {
        string textInvertedAscii = "";
        int asciiLowercaseA = 97;
        int asciiLowercaseZ = 122;

		foreach (char character in message)
		{
			if (char.IsLetter(character))
				textInvertedAscii += Convert.ToChar(asciiLowercaseZ - (int) char.ToLower(character) + asciiLowercaseA);
			else
				textInvertedAscii += character;
		}

		return textInvertedAscii;
    }

	static void Main(string[] args)
	{
		string message = Console.ReadLine();
		Console.WriteLine(EncodeMessage(message));
	}
}
