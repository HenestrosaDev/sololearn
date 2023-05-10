#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int compare_strings(const void* a, const void* b)
{
    const char* str1 = *(const char**)a;
    const char* str2 = *(const char**)b;
    return strcmp(str1, str2);
}

int find(char** arr, int size, char* target)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (strcmp(arr[i], target) == 0)
            return i;
    }
    return -1;
}

int get_waiting_time(char* my_name, int num_agents, char** customers, int num_customers)
{
    int time_for_license = 20;
    int my_name_index = find(customers, num_customers, my_name) + 1;
    int position_in_queue = ceil((double) my_name_index / num_agents);
    int waiting_time = position_in_queue * time_for_license;
    return waiting_time;
}

int main()
{
    char my_name[100];
    scanf("%s", my_name);

    int num_agents;
    scanf("%d", &num_agents);

    char** customers = (char**) malloc(5 * sizeof(char*));
    for (int i = 0; i < 4; i++)
    {
        customers[i] = (char*) malloc(100 * sizeof(char));
        scanf("%s", customers[i]);
    }
    customers[4] = (char*) malloc(100 * sizeof(char));
    strcpy(customers[4], my_name);
    qsort(customers, 5, sizeof(char*), compare_strings);

    printf("%d", get_waiting_time(my_name, num_agents, customers, 5));

    return 0;
}