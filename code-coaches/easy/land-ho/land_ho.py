from math import ceil


def get_waiting_time(num_people_ahead: int) -> int:
    trip_duration = 10
    boat_capacity = 20

    # add 1 to account for yourself
    num_boats_needed = ceil((num_people_ahead + 1) / boat_capacity)

    # trip_duration * 2 because of round trip
    # num_boats_needed - 1 to not include our boat
    waiting_time = (num_boats_needed - 1) * trip_duration * 2

    total_waiting_time = waiting_time + trip_duration
    return total_waiting_time


def main():
    num_people_ahead = int(input())
    print(get_waiting_time(num_people_ahead))


if __name__ == "__main__":
    main()
