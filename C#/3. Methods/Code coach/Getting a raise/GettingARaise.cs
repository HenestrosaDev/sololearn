using System;

namespace SoloLearn
{
	class Program
	{
		public static void Main(string[] args)
		{
			int salaryBudget = Convert.ToInt32(Console.ReadLine());
			int percent = Convert.ToInt32(Console.ReadLine());

			Console.WriteLine($"Before the increase: {salaryBudget}");
			Increase(ref salaryBudget, percent);
			Console.WriteLine($"After the increase: {salaryBudget}");
		}

		public static void Increase(ref int salaryBudget, int percent)
		{
			salaryBudget = salaryBudget * (percent + 100) / 100;
		}
	}
}