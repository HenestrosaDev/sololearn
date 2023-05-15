#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

float get_total(int* prices, int length)
{
    float tax = 1.07;
    float total = 0.0;
    for (int i = 0; i < length; i++)
    {
        total += (prices[i] < 20) ? prices[i] * tax : prices[i];
    }

    float total_rounded = roundf(total * 100) / 100.0;
    return total_rounded;
}

int main()
{
    char input[100];
    fgets(input, sizeof(input), stdin);

    int prices[100];
    int length = 0;

    char* token = strtok(input, ",");
    while (token != NULL)
    {
        prices[length++] = atoi(token);
        token = strtok(NULL, ",");
    }

    printf("%.2f", get_total(prices, length));

    return 0;
}
