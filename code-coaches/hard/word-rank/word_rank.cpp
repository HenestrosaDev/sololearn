#include <iostream>
#include <algorithm>
#include <set>
#include <vector>

void generate_permutations(std::string prefix, std::string remaining, std::set<std::string> &permutations)
{
	if (remaining.length() == 0)
	{
		permutations.insert(prefix);
	}
	else
	{
		for (int i = 0; i < remaining.length(); i++)
		{
			std::string new_prefix = prefix + remaining[i];
			std::string new_remaining = remaining.substr(0, i) + remaining.substr(i + 1);
			generate_permutations(new_prefix, new_remaining, permutations);
		}
	}
}

int calculate_word_rank(std::string word)
{
	std::set<std::string> permutations;
	generate_permutations("", word, permutations);

	std::vector<std::string> sorted_permutations(permutations.begin(), permutations.end());
	std::sort(sorted_permutations.begin(), sorted_permutations.end());

	int rank = find(sorted_permutations.begin(), sorted_permutations.end(), word) - sorted_permutations.begin() + 1;

	return rank;
}

int main()
{
	std::string word;
	std::cin >> word;

	std::cout << calculate_word_rank(word) << std::endl;

	return 0;
}
