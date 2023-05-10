#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_money_safe(char *layout)
{
    // Find the indices of the money, thief, and guards on the casino floor
    int money_index = strchr(layout, '$') - layout;
    int thief_index = strchr(layout, 'T') - layout;

    // Find all guard indices
    int guard_indices[strlen(layout)];
    int num_guards = 0;
    for (int i = 0; i < strlen(layout); i++)
    {
        if (layout[i] == 'G')
        {
            guard_indices[num_guards] = i;
            num_guards++;
        }
    }

    // Check if there is a guard between the money and the thief
    for (int i = 0; i < num_guards; i++)
    {
        int guard_index = guard_indices[i];
        if ((money_index < thief_index && money_index < guard_index && guard_index < thief_index)
            || (thief_index < money_index && thief_index < guard_index && guard_index < money_index))
        {
            return true;
        }
    }

    return false;
}

int main()
{
    char layout[1000];
    scanf("%s", layout);

    if (is_money_safe(layout))
        printf("quiet");
    else
        printf("ALARM");

    return 0;
}
