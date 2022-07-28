using System;

namespace LevelPoints
{
	class Program
	{
		static void Main(string[] args)
		{
			int levels = int.Parse(Console.ReadLine());
			Console.WriteLine(Points(levels));
		}

		static int Points(int levels)
		{
			if (levels == 1)
			{
				return 1;
			}

			return levels + Points(levels - 1);
		}
	}
}