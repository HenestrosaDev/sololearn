#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int get_waiting_time(std::string my_name, int num_agents, std::vector<std::string> customers)
{
    int time_for_license = 20;
    int my_name_index = find(customers.begin(), customers.end(), my_name) - customers.begin() + 1;
    int position_in_queue = ceil((double) my_name_index / num_agents);
    int waiting_time = position_in_queue * time_for_license;
    return waiting_time;
}

int main()
{
    std::string my_name;
    int num_agents;
    std::vector<std::string> customers;

    std::cin >> my_name >> num_agents;
    for (int i = 0; i < 4; i++)
    {
        std::string customer;
        std::cin >> customer;
        customers.push_back(customer);
    }

    customers.push_back(my_name);
    sort(customers.begin(), customers.end());
    std::cout << get_waiting_time(my_name, num_agents, customers);

    return 0;
}
