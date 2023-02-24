using System;

namespace SoloLearn
{
	public class Program
	{
		public static void Main(string[] args)
		{
			int count = Convert.ToInt32(Console.ReadLine());
			int[] numbers = new int[count];

			for (int i = 0; i < count; i++)
			{
				numbers[i] = Convert.ToInt32(Console.ReadLine());
			}

			Array.Sort(numbers);

			foreach (int number in numbers)
			{
				Console.WriteLine(number);
			}
		}
	}
}