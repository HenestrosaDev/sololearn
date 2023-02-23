using System;

namespace SoloLearn
{
	public class Program
	{
		public static void Main(string[] args)
		{
			int day1Winner = Convert.ToInt32(Console.ReadLine());
			int day2Winner = Convert.ToInt32(Console.ReadLine());
			int day3Winner = Convert.ToInt32(Console.ReadLine());


			string[][] olympiad = new string[][]
			{
                //day 1 - 5 participants
                new string[] { "Jill Yan", "Bridgette Ramona", "Sree Sanda", "Jareth Charlene", "Carl Soner" },
                //day 2 - 7 participants
                new string[] { "Anna Hel", "Mariette Vedrana", "Fran Mayur", "Drake Hilmar", "Nikolay Brooks", "Eliana Vlatko", "Villem Mario" },
                //day 3 - 4 participants
                new string[] { "Hieremias Zavia", "Ziya Ollie", "Christoffel Casper", "Kristian Dana", }

			};

			Console.WriteLine(olympiad[0][day1Winner - 1]);
			Console.WriteLine(olympiad[1][day2Winner - 1]);
			Console.WriteLine(olympiad[2][day3Winner - 1]);
		}
	}
}