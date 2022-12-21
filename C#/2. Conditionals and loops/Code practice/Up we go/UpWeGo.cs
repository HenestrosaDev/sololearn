using System;

namespace SoloLearn
{
	public class Program
	{
		public static void Main(string[] args)
		{
			int flightHours = 5;
			int distanceTravelled = 0;
			for (int i = 0; i < flightHours; i++)
			{
				distanceTravelled += 80;
				Console.WriteLine(distanceTravelled);
			}
		}
	}
}