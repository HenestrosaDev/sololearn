using System;

namespace SoloLearn
{
	public class Program
	{
		public static void Main(string[] args)
		{
			int[,] nums = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };

			for (int i = 0; i < nums.GetLength(0); i++)
			{
				for (int j = 0; j < nums.GetLength(1); j++)
				{
					Console.Write(nums[i, j]);
				}
				Console.WriteLine();
			}
		}
	}
}