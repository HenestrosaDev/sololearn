using System;

namespace SoloLearn
{
	public class Program
	{
		public static void Main(string[] args)
		{
			WayStatus status = new WayStatus();
		}
	}

	public class Flight
	{
		public Flight()
		{
			Console.WriteLine("Registration");
		}
		~Flight()
		{
			Console.WriteLine("Closed");
		}
	}

	public class WayStatus : Flight
	{
		public WayStatus()
		{
			Console.WriteLine("On the way");
		}

		~WayStatus()
		{
			Console.WriteLine("Landed");
		}
	}
}