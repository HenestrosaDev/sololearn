using System;

namespace SoloLearn
{
	public class Program
	{
		public static void Main(string[] args)
		{
			string[] games = { "Alien Shooter", "Tic Tac Toe", "Snake", "Puzzle", "Football" };
			int index = Convert.ToInt32(Console.ReadLine());

			try
			{
				Console.WriteLine(games[index]);
			}
			catch (Exception ex)
			{
				Console.WriteLine("Invalid number");
			}
		}
	}
}