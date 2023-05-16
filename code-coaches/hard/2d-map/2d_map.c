#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calculate_moves(const char* map_str)
{
    char* map_copy = strdup(map_str);

    char* token = strtok(map_copy, ",");
    int num_map_rows = 0;
    while (token != NULL)
    {
        token = strtok(NULL, ",");
        num_map_rows++;
    }
    free(map_copy);

    char letter_to_find = 'P';
    int** map_rows = (int**)malloc(num_map_rows * sizeof(int*));
    for (int i = 0; i < num_map_rows; i++)
    {
        map_rows[i] = (int*)malloc(num_map_rows * sizeof(int));
    }

    int p1_i = -1, p1_j = -1;
    int p2_i = -1, p2_j = -1;

    char* row_token;
    int row_index = 0;
    char* map_copy2 = strdup(map_str);
    token = strtok(map_copy2, ",");
    while (token != NULL)
    {
        row_token = token;
        int col_index = 0;
        while (*row_token != '\0')
        {
            map_rows[row_index][col_index] = *row_token;
            if (*row_token == letter_to_find)
            {
                if (p1_i == -1 && p1_j == -1)
                {
                    p1_i = row_index;
                    p1_j = col_index;
                }
                else
                {
                    p2_i = row_index;
                    p2_j = col_index;
                }
            }
            row_token++;
            col_index++;
        }
        row_index++;
        token = strtok(NULL, ",");
    }
    free(map_copy2);

    // Calculate the number of moves using Manhattan distance formula
    int moves = abs(p1_i - p2_i) + abs(p1_j - p2_j);

    // Free dynamically allocated memory
    for (int i = 0; i < num_map_rows; i++)
    {
        free(map_rows[i]);
    }
    free(map_rows);

    return moves;
}

int main()
{
    char map_str[100];
    scanf("%s", map_str);

    printf("%d\n", calculate_moves(map_str));

    return 0;
}
