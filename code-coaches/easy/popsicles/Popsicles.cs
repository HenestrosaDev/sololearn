using System;

public class Popsicles
{
	public static void Main()
	{
		int siblings;

		do
		{
			siblings = Convert.ToInt32(Console.ReadLine());
		}
		while (siblings == 0);

		int popsicles = Convert.ToInt32(Console.ReadLine());

		if (popsicles % siblings == 0)
		{
			Console.WriteLine("give away");
		}
		else
		{
			Console.WriteLine("eat them yourself");
		}
	}

}