using System;
using System.Linq;
using System.Text;

public class TheSpyLife
{
    static string DecodeMessage(string message)
    {
        StringBuilder decodedMessage = new StringBuilder();

		foreach (char c in message.ToCharArray())
		{
			if (char.IsLetter(c) || char.IsWhiteSpace(c))
				decodedMessage.Append(c);
		}

        string flippedDecodedMessage = new string(decodedMessage.ToString().Reverse().ToArray());
		return flippedDecodedMessage;
    }

	static void Main(string[] args)
	{
		string encodedMessage = Console.ReadLine();
		Console.WriteLine(DecodeMessage(encodedMessage));
	}
}