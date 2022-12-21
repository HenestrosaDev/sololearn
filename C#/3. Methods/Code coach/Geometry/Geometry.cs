using System;

namespace SoloLearn
{
	public class Program
	{
		public static void Main(string[] args)
		{
			int length = Convert.ToInt32(Console.ReadLine());
			int height = Convert.ToInt32(Console.ReadLine());
			Console.WriteLine(Area(length, height));
		}

		public static int Area(int length, int height)
		{
			return length * height;
		}
	}
}