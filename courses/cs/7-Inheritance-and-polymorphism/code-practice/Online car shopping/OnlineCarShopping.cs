using System;

namespace SoloLearn
{
	public class Program
	{
		public static void Main(string[] args)
		{
			string color = Console.ReadLine();
			string equipment = Console.ReadLine();

			Car car = new Car(color, equipment);

			Console.WriteLine(car.GetColor());
			Console.WriteLine(car.GetEquipment());
		}
	}

	public interface IColor
	{
		String GetColor();
	}

	public interface IEquipment
	{
		String GetEquipment();
	}

	public class Car : IColor, IEquipment
	{
		public string color;
		public string equipment;

		public Car(string color, string equipment)
		{
			this.color = color;
			this.equipment = equipment;
		}

		public String GetColor()
		{
			return $"Color: {color}";
		}

		public String GetEquipment()
		{
			return $"Equipment: {equipment}";
		}
	}
}