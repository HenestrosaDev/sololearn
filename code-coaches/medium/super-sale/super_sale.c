#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int get_savings(float prices[], int size)
{
    // Find the index of the most expensive item
    int max_index = 0;
    for (int i = 1; i < size; i++)
    {
        if (prices[i] > prices[max_index]) {
            max_index = i;
        }
    }

    // Remove the most expensive item by shifting the elements
    for (int i = max_index; i < size - 1; i++) {
        prices[i] = prices[i + 1];
    }

    // Calculate savings pre tax
    float discount = 0.3;
    float savings_pre_tax = 0.0;
    for (int i = 0; i < size - 1; i++) {
        savings_pre_tax += prices[i] * discount;
    }

    // Get savings post tax
    float tax = 1.07;
    float savings_post_tax = savings_pre_tax * tax;

    return floor(savings_post_tax);
}

int main()
{
    // Get input
    char input[1000];
    fgets(input, sizeof(input), stdin);

    // Split input and store each price in an array of floats
    int count = 0;
    char *token = strtok(input, ",");
    float prices[100];
    while (token != NULL)
    {
        prices[count] = atof(token);
        count++;
        token = strtok(NULL, ",");
    }

    // Print the result
    printf("%d", get_savings(prices, count));

    return 0;
}
