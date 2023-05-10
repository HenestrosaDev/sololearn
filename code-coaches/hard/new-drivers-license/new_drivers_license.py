from math import ceil


def get_waiting_time(my_name: str, num_agents: int, customers: list[str]) -> int:
    time_for_license = 20
    position_in_queue = ceil((customers.index(my_name) + 1) / num_agents)
    waiting_time = position_in_queue * time_for_license
    return waiting_time


def main():
    my_name = input()
    num_agents = int(input())
    customers = input().split()

    customers.append(my_name)
    customers.sort()
    print(get_waiting_time(my_name, num_agents, customers))


if __name__ == "__main__":
    main()
