using System;

namespace SoloLearn
{
	public class Program
	{
		public static void Main(string[] args)
		{
			Settings("James", 25, "Spanish");
			Settings("Tom", 36);
		}

		public static void Settings(String name, int age, String lang = "English")
		{
			Console.WriteLine($"Name: {name}");
			Console.WriteLine($"Age: {age}");
			Console.WriteLine($"Language: {lang}");
		}
	}
}