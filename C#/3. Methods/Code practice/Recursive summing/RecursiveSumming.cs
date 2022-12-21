using System;

namespace SoloLearn
{
	class Program
	{
		public static void Main(string[] args)
		{
			int maxNumber = Convert.ToInt32(Console.ReadLine());

			Console.WriteLine(RecursiveSum(maxNumber));
		}

		public static int RecursiveSum(int num)
		{
			if (num == 1)
			{
				return num;
			}

			return num + RecursiveSum(num - 1);
		}
	}
}