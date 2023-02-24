using System;

namespace SoloLearn
{
	public class Program
	{
		public static void Main(string[] args)
		{
			int[] nums = new int[5];
			int count = 0;
			while (count < 5)
			{
				nums[count] = Convert.ToInt32(Console.ReadLine());
				count++;
			}

			int sum = 0;
			foreach (int num in nums)
			{
				if (num % 2 == 0)
				{
					sum += num;
				}
			}

			Console.WriteLine(sum);
		}
	}
}