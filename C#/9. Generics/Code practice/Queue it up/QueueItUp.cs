using System;
using System.Collections.Generic;
using System.Linq;

namespace SoloLearn
{
	public class Program
	{
		public static void Main(string[] args)
		{
			Queue<int> q = new Queue<int>();

			while (q.Count < 3)
			{
				int num = Convert.ToInt32(Console.ReadLine());
				q.Enqueue(num);
			}

			String qString = string.Join(" ", q.ToArray()) + " ";
			Console.WriteLine($"Queue: {qString}");

			Queue<int> qSorted = new Queue<int>(q.OrderBy(z => z));
			String qSortedString = string.Join(" ", qSorted.ToArray()) + " ";
			Console.WriteLine($"Sorted: {qSortedString}");
		}
	}
}