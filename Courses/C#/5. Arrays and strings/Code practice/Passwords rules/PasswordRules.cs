using System;

namespace SoloLearn
{
	public class Program
	{
		public static void Main(string[] args)
		{
			string password = Console.ReadLine();
			char[] notAllowedSymbols = { '!', '#', '$', '%', '&', '(', ')', '*', ',', '+', '-' };

			if (password.IndexOfAny(notAllowedSymbols) != -1)
			{
				Console.WriteLine("Invalid");
			}
		}
	}
}