#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calculate_time_to_get_item(char** items, int num_items, const char* item_to_find) 
{
    int time = 5;
    for (int i = 0; i < num_items; i++) 
    {
        if (strcmp(items[i], item_to_find) != 0) 
            time += 5;
        else 
            break;
    }

    return time;
}

int main()
{
    // Items input
    char items_string[1000];
    fgets(items_string, sizeof(items_string), stdin);
    items_string[strcspn(items_string, "\n")] = '\0'; // remove newline character

    int num_items = 1;
    char** items = (char**)malloc(num_items * sizeof(char*));
    char* token = strtok(items_string, ",");
    while (token != NULL)
    {
        items[num_items - 1] = token;
        num_items++;
        items = (char**) realloc(items, num_items * sizeof(char*));
        token = strtok(NULL, ",");
    }

    // Item to find input
    char item_to_find[100];
    fgets(item_to_find, sizeof(item_to_find), stdin);

    // Output
    printf("%d", calculate_time_to_get_item(items, num_items, item_to_find));

    // Free memory
    free(items);

    return 0;
}
