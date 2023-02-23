using System;

namespace SoloLearn
{
	public class Program
	{
		public static void Main(string[] args)
		{
			string name = Console.ReadLine();
			Console.WriteLine($"Hello {name}. Welcome to our event");

			/* Some other ways to do it:
			Console.WriteLine("Hello {0}. Welcome to our event", name);
			Console.WriteLine("Hello " + name + ". Welcome to our event");
			*/
		}
	}
}