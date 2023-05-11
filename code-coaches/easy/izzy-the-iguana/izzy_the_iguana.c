#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SNACKS 100

int get_snack_points(char **snacks, int num_snacks)
{
    char *snack_names[] = {"Mango", "Lettuce", "Carrot", "Cheeseburger"};
    int snack_points[] = {9, 5, 4, 0};
    int points = 0;
    for (int i = 0; i < num_snacks; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (strcmp(snacks[i], snack_names[j]) == 0)
            {
                points += snack_points[j];
                break;
            }
        }
    }
    return points;
}

int main() {
    char *snacks[MAX_SNACKS];
    int num_snacks = 0;
    char input[50];
    while (num_snacks < MAX_SNACKS && scanf("%s", input) == 1)
    {
        snacks[num_snacks] = malloc(strlen(input) + 1);
        strcpy(snacks[num_snacks], input);
        num_snacks++;
    }

    if (get_snack_points(snacks, num_snacks) >= 10)
        printf("Come on Down!\n");
    else
        printf("Time to wait\n");

    for (int i = 0; i < num_snacks; i++)
    {
        free(snacks[i]);
    }

    return 0;
}
