#include <stdio.h>

char* make_carrot_cake(int num_carrots, int num_boxes)
{
    int num_carrots_leftover = num_carrots % num_boxes;
    int num_carrots_to_make_a_cake = 7;

    if (num_carrots_leftover >= num_carrots_to_make_a_cake)
    {
        return "Cake Time";
    } else
    {
        int num_additional_carrots_need = num_carrots_to_make_a_cake - num_carrots_leftover;
        char* result = malloc(30 * sizeof(char)); // Allocate space for the result string
        sprintf(result, "I need to buy %d more", num_additional_carrots_need);
        return result;
    }
}

int main()
{
    int num_carrots, num_boxes;
    scanf("%d %d", &num_carrots, &num_boxes);

    printf("%s", make_carrot_cake(num_carrots, num_boxes));

    return 0;
}
