#include <stdio.h>
#include <string.h>

char* get_initials(char* name)
{
    static char initials[3];
    char *token = strtok(name, " ");
    initials[0] = token[0];
    token = strtok(NULL, " ");
    initials[1] = token[0];
    initials[2] = '\0';

    return initials;
}

int main()
{
    int num_names;
    scanf("%d", &num_names);

    char names[num_names][256];
    for (int i = 0; i < num_names; i++)
    {
        scanf(" %[^\n]", names[i]);
        char* initials = get_initials(names[i]);
        printf("%s ", initials);
    }

    return 0;
}