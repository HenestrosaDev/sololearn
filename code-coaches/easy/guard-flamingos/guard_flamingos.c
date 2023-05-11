#include <stdio.h>

int main()
{
	int yard_length, yard_width;
	scanf("%d%d", &yard_length, &yard_width);

    int flamingos_to_purchase = yard_length + yard_width;
	printf("%d", flamingos_to_purchase);

	return 0;
}