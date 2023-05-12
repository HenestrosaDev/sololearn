using System;

public class SkeeBall
{
    static bool CanBuySquirtGun(int score, int squirtGunPrice)
    {
        int ratio = 12; // 12 points = 1 ticket
		int tickets = score / ratio;
		return tickets >= squirtGunPrice;
    }

	static void Main(string[] args)
	{
		int score = Convert.ToInt32(Console.ReadLine());
		int squirtGunPrice = Convert.ToInt32(Console.ReadLine());

        if (CanBuySquirtGun(score, squirtGunPrice))
            Console.WriteLine("Buy it!");
		else
			Console.WriteLine("Try again");
	}
}
