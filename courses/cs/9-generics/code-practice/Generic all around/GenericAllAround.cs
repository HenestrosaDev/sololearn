using System;

namespace SoloLearn
{
	public class Program
	{
		public static void Main(string[] args)
		{
			Elems<string> elems1 = new Elems<string>();
			elems1.Add("John", "Tamara", "David");
			elems1.Show();

			Console.WriteLine();

			Elems<int> elems2 = new Elems<int>();
			elems2.Add(5, 14, 13);
			elems2.Show();
		}
	}

	public class Elems<T>
	{
		public T[] elements = new T[3];

		public void Add(T elem1, T elem2, T elem3)
		{
			elements[0] = elem1;
			elements[1] = elem2;
			elements[2] = elem3;
		}

		public void Show()
		{
			foreach (T item in elements)
			{
				Console.Write($"{item} ");
			}
		}
	}
}