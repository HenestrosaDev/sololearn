using System;

namespace SoloLearn
{
	public class Program
	{
		public static void Main(string[] args)
		{
			Card card = new Card();
			Console.WriteLine(card.AccountNum);
		}
	}

	public class Card
	{
		private string accountNum = "0011592048120";
		public string AccountNum
		{
			get { return accountNum; }
		}

	}
}