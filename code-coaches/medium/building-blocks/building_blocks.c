#include <stdio.h>

int main()
{
    const int num_students = 15;
    int num_blocks = 0;
    for (int i = 0; i < 4; ++i)
    {
        int input;
        scanf("%d", &input);
        num_blocks += input;
    }

    printf("%d\n", num_blocks % num_students);

    return 0;
}
