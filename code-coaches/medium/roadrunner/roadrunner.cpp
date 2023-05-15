#include <iostream>

bool is_roadrunner_safe(int distance_to_safety, int roadrunner_speed, int coyote_speed)
{
    double seconds_to_safety = distance_to_safety / roadrunner_speed;
    double roadrunner_distance = roadrunner_speed * seconds_to_safety;
    double coyote_distance = coyote_speed * seconds_to_safety - 50;
    return roadrunner_distance > coyote_distance;
}

int main()
{
    int distance_to_safety, roadrunner_speed, coyote_speed;
    std::cin >> distance_to_safety >> roadrunner_speed >> coyote_speed;

    if (is_roadrunner_safe(distance_to_safety, roadrunner_speed, coyote_speed))
        std::cout << "Meep Meep";
    else
        std::cout << "Yum";

    return 0;
}
