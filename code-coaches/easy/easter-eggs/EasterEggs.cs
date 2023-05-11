using System;

public class EasterEggs
{
	static void Main(string[] args) {
		int totalEggs = int.Parse(Console.ReadLine());
		int eggsFoundByMe = int.Parse(Console.ReadLine());
		int eggsFoundByFriend = int.Parse(Console.ReadLine());
		int eggsFound = eggsFoundByMe + eggsFoundByFriend;

        if (eggsFound == totalEggs) {
	    	Console.WriteLine("Candy Time");
        } else {
	    	Console.WriteLine("Keep Hunting");
        }
    }
}
