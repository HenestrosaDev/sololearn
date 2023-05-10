#include <stdio.h>

int main()
{
    int num_friends;
    scanf("%d", &num_friends);

    int candles_per_person = 9;
    // + candles_per_person because we order 9 candles, independently of the number of friends
    int candles = num_friends * candles_per_person + candles_per_person;

	printf("%d", candles);

	return 0;
}