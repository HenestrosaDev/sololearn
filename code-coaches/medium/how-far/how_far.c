#include <stdio.h>
#include <string.h>

int get_blocks_between_house_and_pond(char *layout)
{
    // Find the indices of the money, thief, and guards on the casino floor
    int house_index = strchr(layout, 'H') - layout;
    int pond_index = strchr(layout, 'P') - layout;
    int block_indices[100];
    int block_count = 0;
    for (int i = 0; i < strlen(layout); i++)
    {
        if (layout[i] == 'B') {
            block_indices[block_count++] = i;
        }
    }

    int count = 0;
    for (int i = 0; i < block_count; i++)
    {
        int block_index = block_indices[i];
        if ((house_index < pond_index && house_index < block_index && block_index < pond_index)
            || (pond_index < house_index && pond_index < block_index && block_index < house_index))
        {
            count++;
        }
    }

    return count;
}

int main()
{
    char layout[101];
    scanf("%s", layout);

    printf("%d", get_blocks_between_house_and_pond(layout));

    return 0;
}
