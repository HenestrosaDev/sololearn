using System;

namespace SoloLearn
{
	public class Program
	{
		public static void Main(string[] args)
		{
			Welcome welcome = new Welcome();
			welcome.WelcomeMessage();
		}
	}

	public class Welcome
	{
		public void WelcomeMessage()
		{
			Console.WriteLine("Welcome to OOP");
		}
	}
}