using System;

public class Popsicles
{
    static string DistributePopsicles(int popsicles, int siblings)
    {
        if (popsicles % siblings == 0)
			Console.WriteLine("give away");
		else
			"eat them yourself");
    }

	static void Main(string[] args)
	{
		int siblings;

		do
		{
			siblings = Convert.ToInt32(Console.ReadLine());
		}
		while (siblings == 0);

		int popsicles = Convert.ToInt32(Console.ReadLine());

		Console.WriteLine(DistributePopsicles(popsicles, siblings));
	}

}