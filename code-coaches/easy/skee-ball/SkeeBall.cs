using System;

public class SkeeBall
{
    public static string CanBuySquirtGun(int score, int squirtGunPrice)
    {
        int ratio = 12; // 12 points = 1 ticket
		int tickets = score / ratio;

		if (tickets >= squirtGunPrice)
			return "Buy it!";
		else
			return "Try again";
    }

	public static void Main()
	{
		int score = Convert.ToInt32(Console.ReadLine());
		int squirtGunPrice = Convert.ToInt32(Console.ReadLine());

		Console.WriteLine(CanBuySquirtGun(score, squirtGunPrice));
	}
}
