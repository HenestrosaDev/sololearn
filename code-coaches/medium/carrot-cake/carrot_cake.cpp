#include <iostream>

std::string make_carrot_cake(int num_carrots, int num_boxes)
{
    int num_carrots_leftover = num_carrots % num_boxes;
    int num_carrots_to_make_a_cake = 7;

    if (num_carrots_leftover >= num_carrots_to_make_a_cake)
    {
        return "Cake Time";
    }
    else
    {
        int num_additional_carrots_need = num_carrots_to_make_a_cake - num_carrots_leftover;
        return "I need to buy " + std::to_string(num_additional_carrots_need) + " more";
    }
}

int main()
{
  int num_carrots, num_boxes;
  std::cin >> num_carrots >> num_boxes;

  std::cout << make_carrot_cake(num_carrots, num_boxes);

  return 0;
}
