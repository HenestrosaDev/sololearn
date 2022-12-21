using System;

namespace SoloLearn
{
	public class Program
	{
		public static void Main(string[] args)
		{
			int num = Convert.ToInt32(Console.ReadLine());

			switch (num)
			{
				case 1:
					Console.WriteLine("Easy");
					break;
				case 2:
					Console.WriteLine("Medium");
					break;
				case 3:
					Console.WriteLine("Hard");
					break;
				default:
					Console.WriteLine("Invalid option");
					break;
			}
		}
	}
}