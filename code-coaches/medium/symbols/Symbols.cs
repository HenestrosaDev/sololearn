using System;

class Symbols
{
	public static string RemoveSymbols(string encoded)
	{
	    // symbols: a char that is not alphanumeric or a space
	    string decoded = "";

		foreach (char c in encoded.ToCharArray())
		{
			if (char.IsLetterOrDigit(c) || char.IsWhiteSpace(c))
				decoded += c;
		}

		return decoded;
	}

	public static void Main()
	{
		string encoded = Console.ReadLine();
		Console.WriteLine(RemoveSymbols(encoded));
	}
}
