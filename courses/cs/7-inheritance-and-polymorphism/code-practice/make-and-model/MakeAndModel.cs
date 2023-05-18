using System;

namespace SoloLearn
{
	public class Program
	{
		public static void Main(string[] args)
		{
			string brandName = Console.ReadLine();
			string modelName = Console.ReadLine();

			Car car = new Car();
			car.Brand = brandName;
			car.Model = modelName;

			car.ShowBrand();
			car.ShowModel();
		}
	}

	public class Vehicle
	{
		public string Brand { get; set; }

		public void ShowBrand()
		{
			Console.WriteLine($"Brand: {Brand}");
		}
	}

	public class Car : Vehicle
	{
		public string Model { get; set; }

		public void ShowModel()
		{
			Console.WriteLine($"Model: {Model}");
		}
	}
}