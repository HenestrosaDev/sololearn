#include <iostream>

std::string is_backup_needed(int criminals)
{
    if (criminals < 5)
		return "I got this!";
	else if (5 <= criminals && criminals <= 10)
		return "Help me Batman";
	else
		return "Good Luck out there!";
}

int main()
{
	int criminals;
	std::cin >> criminals;

	std::cout << is_backup_needed(criminals);

	return 0;
}