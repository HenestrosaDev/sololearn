#include <iostream>

void promotion(int *megabytes)
{
  int multiplier;
  std::cin >> multiplier;
  *megabytes *= multiplier;
}

int main()
{
  int megabytes;
  std::cin >> megabytes;

  std::cout << "Before the promotion: " << megabytes << std::endl;

  promotion(&megabytes);

  std::cout << "After the promotion: " << megabytes << std::endl;

  return 0;
}
