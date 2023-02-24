using System;

namespace LevelPoints
{
	public class Program
	{
		public static void Main(string[] args)
		{
			int levels = int.Parse(Console.ReadLine());
			Console.WriteLine(Points(levels));
		}

		public static int Points(int levels)
		{
			if (levels == 1)
			{
				return 1;
			}

			return levels + Points(levels - 1);
		}
	}
}