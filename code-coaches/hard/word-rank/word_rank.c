// I have used https://www.geeksforgeeks.org/lexicographic-permutations-of-string/
// as a reference for finishing this code coach for C

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/* Following function is needed for library function qsort(). Refer
http://www.cplusplus.com/reference/clibrary/cstdlib/qsort/ */
int compare(const void *a, const void *b)
{
	return (*(char *)a - *(char *)b);
}

// A utility function to swap two characters
void swap(char *a, char *b)
{
	char t = *a;
	*a = *b;
	*b = t;
}

// This function finds the index of the smallest character
// which is greater than 'first' and is present in str[l..h]
int find_ceil(char str[], char first, int l, int h)
{
	// initialize index of ceiling element
	int ceil_index = l;

	// Now iterate through rest of the elements and find
	// the smallest character greater than 'first'
	for (int i = l + 1; i <= h; i++)
		if (str[i] > first && str[i] < str[ceil_index])
			ceil_index = i;

	return ceil_index;
}

// Get rank of string
int calculate_word_rank(char str[])
{
	char original_str[strlen(str) + 1];
	strcpy(original_str, str);

	// Get size of string
	int size = strlen(str);

	// Sort the string in increasing order
	qsort(str, size, sizeof(str[0]), compare);

	// Generate permutations
	int permutation_count = 0;
	bool is_finished = false;
	while (!is_finished)
	{
		permutation_count++;

		// check if this permutation equals the original string
		if (strcmp(original_str, str) == 0)
			return permutation_count;

		// Find the rightmost character which is smaller than its next
		// character. Let us call it 'first char'
		int i;
		for (i = size - 2; i >= 0; --i)
			if (str[i] < str[i + 1])
				break;

		// If there is no such character, all are sorted in decreasing order,
		// means we just printed the last permutation and we are done.
		if (i == -1)
		{
			is_finished = true;
		}
		else
		{
			// Find the ceil of 'first char' in right of first character.
			// Ceil of a character is the smallest character greater than it
			int ceil_index = find_ceil(str, str[i], i + 1, size - 1);

			// Swap first and second characters
			swap(&str[i], &str[ceil_index]);

			// Sort the string on right of 'first char'
			qsort(str + i + 1, size - i - 1, sizeof(str[0]), compare);
		}
	}

	return -1;
}

// Driver program to test above function
int main()
{
	char word[20];
	scanf("%s", word);

	printf("%d\n", calculate_word_rank(word));

	return 0;
}