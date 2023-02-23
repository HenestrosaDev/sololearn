using System;

namespace SoloLearn
{
	public class Program
	{
		public static void Main(string[] args)
		{
			Figure rectangle = new Rectangle(5, 6);
			Figure triangle = new Triangle(4, 8, 3);

			Console.WriteLine(rectangle.Perimeter());
			Console.WriteLine(triangle.Perimeter());
		}
	}

	public abstract class Figure
	{
		public abstract int Perimeter();
	}

	public class Rectangle : Figure
	{
		public int width;
		public int height;

		public Rectangle(int width, int height)
		{
			this.width = width;
			this.height = height;
		}

		public override int Perimeter()
		{
			return (width + height) * 2;
		}
	}

	public class Triangle : Figure
	{
		public int side1;
		public int side2;
		public int side3;

		public Triangle(int s1, int s2, int s3)
		{
			this.side1 = s1;
			this.side2 = s2;
			this.side3 = s3;
		}

		public override int Perimeter()
		{
			return side1 + side2 + side3;
		}
	}
}