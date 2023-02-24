using System;

namespace SoloLearn
{
	public class Program
	{
		public static void Main(string[] args)
		{
			MusicGenres genres = new MusicGenres();

			int count = 0;
			while (count < 5)
			{
				genres[count] = Console.ReadLine();
				count++;
			}

			for (int i = 0; i < 5; i++)
			{
				Console.WriteLine($"Following: {genres[i]}");
			}
		}
	}

	public class MusicGenres
	{
		private string[] genres = new string[5];

		public string this[int index]
		{
			get
			{
				return genres[index];
			}
			set
			{
				genres[index] = value;
			}
		}
	}
}