// I have used https://www.geeksforgeeks.org/lexicographic-permutations-of-string/
// as a reference for finishing this code coach for C#

using System;
using System.Collections.Generic;
using System.Linq;

class WordRank
{
	// This function finds the index of the smallest
	// character which is greater than 'first' and is
	// present in str[l..h]
	static int FindCeil(char[] str, char first, int l, int h)
	{
		// initialize index of ceiling element
		int ceilIndex = l;

		// Now iterate through rest of the elements and find
		// the smallest character greater than 'first'
		for (int i = l + 1; i <= h; i++)
			if (str[i] > first && str[i] < str[ceilIndex])
				ceilIndex = i;

		return ceilIndex;
	}

	// Get rank of char array
	static int CalculateWordRank(char[] str)
	{

		char[] originalStr = new char[str.Length];
        Array.Copy(str, originalStr, str.Length);

		// Get size of string
		int size = str.Length;

		// Sort the string in increasing order
		Array.Sort(str);

		// Generate permutations
		int permutationCount = 0;
		bool isFinished = false;
		while (!isFinished)
		{
			permutationCount++;

			if (Enumerable.SequenceEqual(str, originalStr))
				return permutationCount;

			// Find the rightmost character which is
			// smaller than its next character.
			// Let us call it 'first char'
			int i;
			for (i = size - 2; i >= 0; --i)
				if (str[i] < str[i + 1])
					break;

			// If there is no such character, all are
			// sorted in decreasing order, means we
			// just printed the last permutation and we are
			// done.
			if (i == -1)
			{
				isFinished = true;
			}
			else
			{
				// Find the ceil of 'first char' in
				// right of first character.
				// Ceil of a character is the smallest
				// character greater than it
				int ceilIndex = FindCeil(str, str[i], i + 1, size - 1);

				// Swap first and second characters
				char temp = str[i];
				str[i] = str[ceilIndex];
				str[ceilIndex] = temp;

				// Sort the string on right of 'first char'
				Array.Sort(str, i + 1, size - i - 1);
			}
		}

		return -1;
	}

	// Driver program to test above function
	public static void Main(string[] args)
	{
		string word = Console.ReadLine();
		char[] wordArray = word.ToCharArray();
		Console.WriteLine(CalculateWordRank(wordArray));
	}
}