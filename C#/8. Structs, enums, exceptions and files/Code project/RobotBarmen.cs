using System;

namespace RobotBarmen
{
	class Program
	{
		static void Main(string[] args)
		{
			try
			{
				int drinks = int.Parse(Console.ReadLine());
				int shelves = int.Parse(Console.ReadLine());

				Console.WriteLine(drinks / shelves);
			}
			catch (DivideByZeroException e)
			{
				Console.WriteLine("At least 1 shelf");
			}
			catch (FormatException e2)
			{
				Console.WriteLine("Please insert an integer");
			}
		}
	}
}