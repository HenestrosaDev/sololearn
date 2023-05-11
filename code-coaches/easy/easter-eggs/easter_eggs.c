#include <stdio.h>

int main()
{
    int total_eggs, eggs_found_by_me, eggs_found_by_friend;
    scanf("%d%d%d", &total_eggs, &eggs_found_by_me, &eggs_found_by_friend);

    int eggs_found = eggs_found_by_me + eggs_found_by_friend;
    if (eggs_found == total_eggs)
        printf("Candy Time");
    else
        printf("Keep Hunting");

    return 0;
}
