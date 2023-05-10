#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_ITEMS 100

double get_total_cost(char** order, int n)
{
    char* items[] = {"Pizza", "Nachos", "Cheeseburger", "Water", "Coke"};
    double prices[] = {6.0, 6.0, 10.0, 4.0, 5.0};
    double subtotal = 0.0;
    for (int i = 0; i < n; i++)
    {
        int found = 0;
        for (int j = 0; j < 5; j++)
        {
            if (strcmp(order[i], items[j]) == 0)
            {
                subtotal += prices[j];
                found = 1;
                break;
            }
        }
        if (!found)
        {
            subtotal += 5.0;
        }
    }
    double tax = 1.07;
    double total = subtotal * tax;
    return round(total * 100) / 100;
}

int main()
{
    char order_input[1000];
    fgets(order_input, sizeof(order_input), stdin);
    order_input[strcspn(order_input, "\n")] = 0;

    char* order[MAX_ITEMS];
    int n = 0;
    char* item = strtok(order_input, " ");
    while (item != NULL && n < MAX_ITEMS)
    {
        order[n++] = item;
        item = strtok(NULL, " ");
    }

    printf("%.2f", get_total_cost(order, n));
    return 0;
}
