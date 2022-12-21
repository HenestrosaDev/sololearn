using System;

namespace SoloLearn
{
	public class Program
	{
		public static void Main(string[] args)
		{
			int games = Convert.ToInt32(Console.ReadLine());
			int wins = Convert.ToInt32(Console.ReadLine());

			Player player1 = new Player(games, wins);
			Console.WriteLine(player1.GetWinRate());
		}
	}

	public class Player
	{
		private int games;
		private int wins;

		public Player(int games, int wins)
		{
			this.games = games;
			this.wins = wins;
		}

		public int GetWinRate()
		{
			return (int) this.wins * 100 / this.games;
		}
	}
}