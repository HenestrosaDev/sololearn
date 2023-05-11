#include <stdio.h>
#include <math.h>

int get_area(int height, int width)
{
    return height * width;
}

int to_inches(int feet)
{
    return feet * 12;
}

int get_duct_tapes_needed(int height, int width)
{
    // Everything is calculated in inches
    int duct_tape_height = 720;
    int duct_tape_width = 2;

    int door_area_both_sides = get_area(height, width) * 2;
    int duct_tape_area = get_area(duct_tape_height, duct_tape_width);

    int duct_tapes_needed = ceil((double) door_area_both_sides / duct_tape_area);
    return duct_tapes_needed;
}

int main()
{
    int door_height_feet, door_width_feet;

    scanf("%d%d", &door_height_feet, &door_width_feet);

    int door_height_inches = to_inches(door_height_feet);
    int door_width_inches = to_inches(door_width_feet);

    printf("%d", get_duct_tapes_needed(door_height_inches, door_width_inches));

    return 0;
}
