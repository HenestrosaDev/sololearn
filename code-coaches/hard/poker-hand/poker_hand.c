#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void count_card_values(char cards[][3], int *counts)
{
	for (int i = 0; i < 5; i++)
	{
		char cardValue = cards[i][0];
		switch (cardValue)
		{
		case '2':
			counts[0]++;
			break;
		case '3':
			counts[1]++;
			break;
		case '4':
			counts[2]++;
			break;
		case '5':
			counts[3]++;
			break;
		case '6':
			counts[4]++;
			break;
		case '7':
			counts[5]++;
			break;
		case '8':
			counts[6]++;
			break;
		case '9':
			counts[7]++;
			break;
		case '1': // Card value "10" represented as '1'
			counts[8]++;
			break; 
		case 'J':
			counts[9]++;
			break;
		case 'Q':
			counts[10]++;
			break;
		case 'K':
			counts[11]++;
			break;
		case 'A':
			counts[12]++;
			break;
		}
	}
}

// Function to check if there is a pair, three of a kind, or four of a kind
int checkPairThreeFour(int *counts, int num)
{
	for (int i = 0; i < 13; i++)
	{
		if (counts[i] == num)
		{
			return 1;
		}
	}

	return 0;
}

int is_two_pairs(int *counts)
{
	int pairs = 0;
	for (int i = 0; i < 13; i++)
	{
		if (counts[i] == 2)
		{
			pairs++;
		}
	}

	return (pairs == 2);
}

int is_straight(int *counts)
{
	for (int i = 0; i < 9; i++)
	{
		int is_straight = 1;
		for (int j = i; j < i + 5; j++)
		{
			if (counts[j] == 0)
			{
				is_straight = 0;
				break;
			}
		}

		if (is_straight)
		{
			return 1;
		}
	}

	return 0;
}

int is_flush(char cards[][3])
{
	char suit = cards[0][1];
	for (int i = 1; i < 5; i++)
	{
		if (cards[i][1] != suit)
		{
			return 0;
		}
	}

	return 1;
}

const char* evaluate_poker_hand(char cards[][3])
{
	int counts[13] = {0};
	count_card_values(cards, counts);

	if (is_flush(cards))
	{
		if (is_straight(counts))
		{
			if (counts[9] == 1 && counts[12] == 1)
			{
				return "Royal Flush";
			}
			else
			{
				return "Straight Flush";
			}
		}
		else
		{
			return "Flush";
		}
	}
	else if (is_straight(counts))
	{
		return "Straight";
	}
	else if (checkPairThreeFour(counts, 4))
	{
		return "Four of a Kind";
	}
	else if (checkPairThreeFour(counts, 3) && checkPairThreeFour(counts, 2))
	{
		return "Full House";
	}
	else if (checkPairThreeFour(counts, 3))
	{
		return "Three of a Kind";
	}
	else if (is_two_pairs(counts))
	{
		return "Two Pairs";
	}
	else if (checkPairThreeFour(counts, 2))
	{
		return "One Pair";
	}
	else
	{
		return "High Card";
	}
}

int main()
{
	char input[100];
	fgets(input, sizeof(input), stdin);
	
	// This is weird because if you run the code without this line below on
	// SoloLearn, the tests will fail. However, if you run the code with gcc
	// and input, for example, `5C 2C KC AC 7C`, the return is "High Card", 
	// which is wrong.

	// input[strlen(input) - 1] = '\0'; // Remove newline character

	char cards[5][3];
	int card_count = 0;

	char *token = strtok(input, " ");
	while (token != NULL && card_count < 5)
	{
		cards[card_count][0] = token[0];
		cards[card_count][1] = token[strlen(token) - 1];
		cards[card_count][2] = '\0'; // Null terminator

		card_count++;
		token = strtok(NULL, " ");
	}

	printf("%s\n", evaluate_poker_hand(cards));

	return 0;
}
