using System;
using System.Collections.Generic;

namespace CoffeeTime
{
	public class Program
	{
		public static void Main(string[] args)
		{
			int discount = int.Parse(Console.ReadLine());

			Dictionary<string, int> coffee = new Dictionary<string, int>();
			coffee.Add("Americano", 50);
			coffee.Add("Latte", 70);
			coffee.Add("Flat White", 60);
			coffee.Add("Espresso", 60);
			coffee.Add("Cappuccino", 80);
			coffee.Add("Mocha", 90);


			foreach (string key in coffee.Keys)
			{
				int discountedPrice = coffee[key] - (coffee[key] * discount / 100);
				Console.WriteLine($"{key}: {discountedPrice}");
			}
		}
	}
}