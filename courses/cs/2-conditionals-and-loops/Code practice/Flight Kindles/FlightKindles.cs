using System;

namespace SoloLearn
{
	public class Program
	{
		public static void Main(string[] args)
		{
			int age = Convert.ToInt32(Console.ReadLine());
			if (age <= 19)
			{
				Console.WriteLine("Take your kindle");
			}
		}
	}
}