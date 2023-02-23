using System;

namespace MultipleOf3
{
	public class Program
	{
		public static void Main(string[] args)
		{
			int num = int.Parse(Console.ReadLine());

			for (int i = 1; i <= num; i++)
			{
				if (i % 3 == 0)
				{
					Console.Write("*");
				}
				else
				{
					Console.Write(i);
				}
			}
		}
	}
}