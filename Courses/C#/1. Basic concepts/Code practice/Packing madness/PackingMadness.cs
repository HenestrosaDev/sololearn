using System;

namespace SoloLearn
{
	public class Program
	{
		public static void Main(string[] args)
		{
			int toys = 142;
			int boxCapacity = 15;
			int toysLeft = toys % boxCapacity;

			Console.WriteLine(toysLeft);
		}
	}
}