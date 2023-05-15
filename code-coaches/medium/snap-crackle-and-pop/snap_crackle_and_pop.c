#include <stdio.h>

const char* get_sound(int num_rice_krispies)
{
    if (num_rice_krispies % 3 == 0)
        return "Pop";
    else if (num_rice_krispies % 2 != 0)
        return "Snap";
    else
        return "Crackle";
}

int main()
{
    int num_rice_krispies_list[6];
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &num_rice_krispies_list[i]);
    }

    char sounds[6][8];  // Assuming the maximum length of sound is 8 characters

    for (int i = 0; i < 6; i++)
    {
        const char* sound = get_sound(num_rice_krispies_list[i]);
        snprintf(sounds[i], sizeof(sounds[i]), "%s", sound);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%s ", sounds[i]);
    }

    return 0;
}
