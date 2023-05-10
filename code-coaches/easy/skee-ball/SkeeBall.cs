using System;

public class SkeeBall
{
    public static bool CanBuySquirtGun(int score, int squirtGunPrice)
    {
        int ratio = 12; // 12 points = 1 ticket
		int tickets = score / ratio;
		return tickets >= squirtGunPrice;
    }

	public static void Main()
	{
		int score = Convert.ToInt32(Console.ReadLine());
		int squirtGunPrice = Convert.ToInt32(Console.ReadLine());

        if (CanBuySquirtGun(score, squirtGunPrice))
            Console.WriteLine("Buy it!");
		else
			Console.WriteLine("Try again");
	}
}
