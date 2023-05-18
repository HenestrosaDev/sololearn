using System;

namespace SoloLearn
{
	public class Program
	{
		public static void Main(string[] args)
		{
			Unit unit1 = new Unit();
			Unit musketeer = new Musketeer();
			Unit magician = new Magician();

			unit1.Attack();
			musketeer.Attack();
			magician.Attack();
		}
	}

	public class Unit
	{
		public virtual void Attack()
		{
			Console.WriteLine("Using sword!");
		}
	}

	public class Musketeer : Unit
	{
		public override void Attack()
		{
			Console.WriteLine("Using musket!");
		}
	}

	public class Magician : Unit
	{
		public override void Attack()
		{
			Console.WriteLine("Using magic!");
		}
	}
}