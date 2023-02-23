using System;

namespace DrawingApplication
{
	public class Program
	{
		public static void Main(string[] args)
		{
			Draw pencil = new Draw();
			Draw brush = new Brush();
			Draw spray = new Spray();

			pencil.StartDraw();
			brush.StartDraw();
			spray.StartDraw();
		}
	}

	public interface IDraw
	{
		void StartDraw();
	}

	public class Draw : IDraw
	{
		public virtual void StartDraw()
		{
			Console.WriteLine("Using pencil");
		}
	}

	public class Brush : Draw
	{
		public override void StartDraw()
		{
			Console.WriteLine("Using brush");
		}
	}

	public class Spray : Draw
	{
		public override void StartDraw()
		{
			Console.WriteLine("Using spray");
		}
	}
}