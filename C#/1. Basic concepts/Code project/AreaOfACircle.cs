using System;

namespace SoloLearn
{
	class AreaOfACircle
	{
		static void Main(string[] args)
		{
			const double pi = 3.14;
			double radius = double.Parse(Console.ReadLine());
			double area = pi * Math.Pow(radius, 2);

			Console.WriteLine(area);
		}
	}
}