using System;

namespace PackingMadness
{
	class Program
	{
		static void Main(string[] args)
		{
			int toys = 142;
			int boxCapacity = 15;
			int toysLeft = toys % boxCapacity;

			Console.WriteLine(toysLeft);
		}
	}
}