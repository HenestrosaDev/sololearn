using System;

namespace SoloLearn
{
	public class Program
	{
		public static void Main(string[] args)
		{
			int salary = Convert.ToInt32(Console.ReadLine());
			int yearlySalary = salary * 12;
			Console.WriteLine(yearlySalary);
		}
	}
}