using System;

namespace SoloLearn
{
	public class Program
	{
		public static void Main(string[] args)
		{
			string text = Console.ReadLine();
			int intNum = Convert.ToInt32(Console.ReadLine());
			double doubNum = Convert.ToDouble(Console.ReadLine());

			Printer.Print(text);
			Printer.Print(intNum);
			Printer.Print(doubNum);
		}
	}

	public class Printer
	{
		public static void Print<T>(T a)
		{
			Console.WriteLine($"Showing {a}");
		}
	}
}