using System;

namespace Dance
{
	public class Program
	{
		public static void Main(string[] args)
		{
			string name1 = Console.ReadLine();
			int score1 = int.Parse(Console.ReadLine());

			string name2 = Console.ReadLine();
			int score2 = int.Parse(Console.ReadLine());

			DancerScore dancer1 = new DancerScore(name1, score1);
			DancerScore dancer2 = new DancerScore(name2, score2);

			DancerScore total = dancer1 + dancer2;
			Console.WriteLine(total.name);
			Console.WriteLine(total.score);
		}
	}

	public class DancerScore
	{
		public string name;
		public int score;

		public DancerScore(string name, int score)
		{
			this.name = name;
			this.score = score;
		}

		//overload the + operator
		public static DancerScore operator +(DancerScore a, DancerScore b)
		{
			string name = $"{a.name} & {b.name}";
			int score = a.score + b.score;
			return new DancerScore(name, score);
		}
	}
}