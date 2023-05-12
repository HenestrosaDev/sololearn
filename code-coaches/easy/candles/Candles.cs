using System;

public class Candles
{
	static void Main(string[] args)
	{
		int numFriends = int.Parse(Console.ReadLine());
		int candlesPerPerson = 9;
		// + candlesPerPerson because we order 9 candles, independently of the number of friends
		int candles = numFriends * candlesPerPerson + candlesPerPerson;

		Console.WriteLine(candles);
	}
}