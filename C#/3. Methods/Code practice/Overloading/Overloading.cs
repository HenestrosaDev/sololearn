using System;

namespace SoloLearn
{
	class Program
	{
		public static void Main(string[] args)
		{
			// Keep in mind that the best way to do this is with generics.
			Console.WriteLine(Add(10, 12));
			Console.WriteLine(Add(1.5, 2.9));
		}

		public static int Add(params int[] numbers)
		{
			int sum = 0;
			foreach (int number in numbers)
			{
				sum += number;
			}
			return sum;
		}

		public static double Add(params double[] numbers)
		{
			double sum = 0;
			foreach (double number in numbers)
			{
				sum += number;
			}
			return sum;
		}
	}
}