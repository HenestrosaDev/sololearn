using System;

namespace SoloLearn
{
	public class Program
	{
		public static void Main(string[] args)
		{
			int maxBid = Convert.ToInt32(Console.ReadLine());
			int winningBid = 0;

			while (true)
			{
				int bid = Convert.ToInt32(Console.ReadLine());
				if (bid >= maxBid)
				{
					winningBid = bid;
					break;
				}
			}

			Console.WriteLine($"Sold: {winningBid}");
		}
	}
}