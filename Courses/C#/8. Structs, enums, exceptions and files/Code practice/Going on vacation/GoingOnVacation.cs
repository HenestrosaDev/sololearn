using System;

namespace SoloLearn
{
	public class Program
	{
		public static void Main(string[] args)
		{
			string[] tours = { "England", "Spain", "Italy", "Portugal", "France" };
			int choice = Convert.ToInt32(Console.ReadLine());

			try
			{
				Console.WriteLine(tours[choice]);
			}
			catch (Exception e)
			{
				Console.WriteLine("Wrong number");
			}
			finally
			{
				Console.WriteLine("Goodbye");
			}
		}
	}
}