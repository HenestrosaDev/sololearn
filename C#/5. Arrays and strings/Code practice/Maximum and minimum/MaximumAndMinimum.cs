using System;
using System.Linq;

namespace SoloLearn
{
	public class Program
	{
		public static void Main(string[] args)
		{
			int[] nums = new int[5];
			for (int i = 0; i < nums.Length; i++)
			{
				nums[i] = Convert.ToInt32(Console.ReadLine());
			}

			int sum = nums.Min() + nums.Max();
			Console.WriteLine(sum);
		}
	}
}