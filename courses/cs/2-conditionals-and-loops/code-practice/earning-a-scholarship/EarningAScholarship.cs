using System;

namespace SoloLearn
{
	public class Program
	{
		public static void Main(string[] args)
		{
			int attendance = Convert.ToInt32(Console.ReadLine());
			int avgScore = Convert.ToInt32(Console.ReadLine());

			if (attendance >= 95 && avgScore >= 80)
			{
				Console.WriteLine("Accepted");
			}
			else
			{
				Console.WriteLine("Denied");
			}
		}
	}
}