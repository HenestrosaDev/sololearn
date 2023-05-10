#include <iostream>
#include <string>
#include <vector>

bool is_money_safe(const std::string& layout)
{
    // Find the indices of the money, thief, and guards on the casino floor
    auto money_index = layout.find('$');
    auto thief_index = layout.find('T');

    std::vector<int> guard_indices;
    for (int i = 0; i < layout.size(); ++i)
    {
        if (layout[i] == 'G')
            guard_indices.push_back(i);
    }

    // Check if there is a guard between the money and the thief
    for (auto guard_index : guard_indices)
    {
        if (std::min(money_index, thief_index) < guard_index && guard_index < std::max(money_index, thief_index))
        {
            // Found a guard between the money and the thief
            return true;
        }
    }

    // No guard found between the money and the thief
    return false;
}

int main() {
    std::string layout;
    std::cin >> layout;

    if (is_money_safe(layout))
        std::cout << "quiet";
    else
        std::cout << "ALARM";

    return 0;
}


// ALTERNATIVE VERSION:
/*
#include <iostream>
#include <regex>

template <typename C, typename T>
bool contains(C &&c, T e)
{
	return find(begin(c), end(c), e) != end(c);
};

int main()
{
	std::string diagram;
	std::cin >> diagram;

	bool isThiefOnLeft = true;
	int thiefPos = 0;
	int guardPos = 0;

	std::regex reg("\\$");
	std::sregex_token_iterator iter(diagram.begin(), diagram.end(), reg, -1);
	std::sregex_token_iterator end;

	int idx1 = 0;
	std::vector<std::string> diagramSplitted(iter, end);
	for (auto part : diagramSplitted)
	{
		if (contains(part, 'T'))
		{
			int idx2 = 0;
			for (auto c : part)
			{
				if (toupper(c) == 'G')
				{
					if (!isThiefOnLeft && guardPos)
					{
						idx2++;
						continue;
					}
					else 
					{
						guardPos = idx2;
					}
				}
				else if (toupper(c) == 'T')
				{
					thiefPos = idx2;
				}

				idx2++;
			}
		}
		else if (idx1 == 0)
		{
			isThiefOnLeft = false;
			idx1++;
			continue;
		}		
		
		idx1++;
	}

	bool isLeftRobbed = (!guardPos || guardPos < thiefPos) && isThiefOnLeft;
	bool isRightRobbed = (!guardPos || guardPos > thiefPos) && !isThiefOnLeft;

	if (isLeftRobbed || isRightRobbed)
	{
		std::cout << "ALARM";
	}
	else 
	{
		std::cout << "quiet";
	}

	return 0;
}
*/