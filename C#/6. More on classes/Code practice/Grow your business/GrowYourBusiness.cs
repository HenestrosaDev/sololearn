using System;

namespace SoloLearn
{
	public class Program
	{
		public static void Main(string[] args)
		{
			int numOfDeps = Convert.ToInt32(Console.ReadLine());

			int count = 0;
			while (count < numOfDeps)
			{
				string depName = Console.ReadLine();
				Department dep = new Department(depName);
				count++;
			}

			Console.WriteLine("Number of departments: " + Department.depCount);
		}
	}

	public class Department
	{
		public string depName;
		public static int depCount = 2;

		public Department(string name)
		{
			Console.WriteLine($"Department opened: {name}");
			this.depName = name;
			depCount++;
		}
	}
}