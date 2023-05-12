#include <iostream>
#include <cmath>

int get_waiting_time(int num_people_ahead)
{
    int trip_duration = 10;
    int boat_capacity = 20;

    int num_boats_needed = ceil(
        (double) (num_people_ahead + 1) / boat_capacity
    );  // add 1 to account for yourself

    // trip_duration * 2 because of round trip
    // num_boats_needed - 1 to not include our boat
    int waiting_time = (num_boats_needed - 1) * trip_duration * 2;

    int total_waiting_time = waiting_time + trip_duration;
    return total_waiting_time;
}

int main()
{
    int num_people_ahead;
    std::cin >> num_people_ahead;

    std::cout << get_waiting_time(num_people_ahead);

    return 0;
}
