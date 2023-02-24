using System;

namespace SoloLearn
{
	public class Program
	{
		public static void Main(string[] args)
		{
			string accNumber = Console.ReadLine();
			double balance = Convert.ToDouble(Console.ReadLine());

			User user = new User(accNumber, balance);

			user.ShowDetails();
		}
	}

	public class Account
	{
		protected double Balance { get; set; }
	}

	public class User : Account
	{
		public string AccNumber { get; set; }

		public User(string accNumber, double balance)
		{
			this.Balance = balance;
			this.AccNumber = accNumber;
		}

		public void ShowDetails()
		{
			Console.WriteLine($"Account N: {AccNumber}");
			Console.WriteLine($"Balance: {Balance}");
		}
	}
}