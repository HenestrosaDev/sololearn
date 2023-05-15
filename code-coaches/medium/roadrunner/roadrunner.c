#include <stdio.h>

int is_roadrunner_safe(int distance_to_safety, int roadrunner_speed, int coyote_speed)
{
    double seconds_to_safety = distance_to_safety / roadrunner_speed;
    double roadrunner_distance = roadrunner_speed * seconds_to_safety;
    double coyote_distance = coyote_speed * seconds_to_safety - 50;
    return roadrunner_distance > coyote_distance;
}

int main()
{
    int distance_to_safety, roadrunner_speed, coyote_speed;
    scanf("%d%d%d", &distance_to_safety, &roadrunner_speed, &coyote_speed);

    if (is_roadrunner_safe(distance_to_safety, roadrunner_speed, coyote_speed))
        printf("Meep Meep");
    else
        printf("Yum");

    return 0;
}
