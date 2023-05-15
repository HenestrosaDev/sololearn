#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_NAME_LENGTH 100
#define MAX_GROUP_MEMBERS 100

bool contains_name_buddy(const char* names, const char* my_name)
{
    char* token;
    char names_copy[MAX_NAME_LENGTH];
    char* names_split[MAX_GROUP_MEMBERS];
    int names_count = 0;

    // Copy the group names string to a modifiable array
    strcpy(names_copy, names);

    // Tokenize the group names string
    token = strtok(names_copy, " ");
    while (token != NULL && names_count < MAX_GROUP_MEMBERS)
    {
        names_split[names_count++] = token;
        token = strtok(NULL, " ");
    }

    // Check if any group member has the same first letter as my name
    for (int i = 0; i < names_count; i++)
    {
        if (names_split[i][0] == my_name[0])
        {
            return true;  // Found a name buddy
        }
    }

    return false;  // No name buddy found
}

int main()
{
    char names[MAX_NAME_LENGTH];
    fgets(names, sizeof(names), stdin);

    char my_name[MAX_NAME_LENGTH];
    fgets(my_name, sizeof(my_name), stdin);

    if contains_name_buddy(names, my_name)
        printf("%s", "Compare notes");
    else
        printf("%s", "No such luck");

    return 0;
}
