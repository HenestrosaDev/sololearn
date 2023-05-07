using System;

public class SkeeBall
{
	public static void Main()
	{
		int score = Convert.ToInt32(Console.ReadLine());
		int squirtGunPrice = Convert.ToInt32(Console.ReadLine());

		int ratio = 12; // 12 points = 1 ticket
		int tickets = score / ratio;

		if (tickets >= squirtGunPrice) {
			Console.WriteLine("Buy it!");
		} else {
			Console.WriteLine("Try again");
		}
	}
}
