#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

// Card value '10' represented as '1'
std::map<char, int> card_values = {
	{'2', 2}, {'3', 3}, {'4', 4}, {'5', 5}, 
	{'6', 6}, {'7', 7}, {'8', 8}, {'9', 9}, 
	{'1', 10}, {'J', 11}, {'Q', 12}, {'K', 13}, {'A', 14}
};

std::string evaluate_poker_hand(const std::string &hand)
{
	std::stringstream ss(hand);
	std::vector<std::pair<int, char>> cards;
	std::string ss_card;

	while (ss >> ss_card)
	{
		char value = ss_card[0];
		char suit = ss_card[ss_card.length() - 1];

		cards.emplace_back(card_values[value], suit);
	}

	sort(cards.begin(), cards.end());

	bool is_flush = all_of(
	    cards.begin(),
	    cards.end(),
	    [&](const std::pair<int, char> &card) {
		    return card.second == cards.front().second;
	    }
	);

	bool is_straight = adjacent_find(
	    cards.begin(),
	    cards.end(),
	    [](const std::pair<int, char> &prev, const std::pair<int, char> &next) {
		    return next.first != prev.first + 1;
	    }
	) == cards.end();

	std::map<int, int> value_counts;
	for (const auto &card : cards)
	{
		value_counts[card.first]++;
	}

	int pairs_count = 0;
	int three_of_a_kind_count = 0;
	int four_of_a_kind_count = 0;

	for (const auto &entry : value_counts)
	{
		if (entry.second == 2)
			pairs_count++;
		else if (entry.second == 3)
			three_of_a_kind_count++;
		else if (entry.second == 4)
			four_of_a_kind_count++;
	}

	if (is_flush && is_straight && cards.back().first == 14)
	{
		return "Royal Flush";
	}
	else if (is_flush && is_straight)
	{
		return "Straight Flush";
	}
	else if (four_of_a_kind_count == 1)
	{
		return "Four of a Kind";
	}
	else if (three_of_a_kind_count == 1 && pairs_count == 1)
	{
		return "Full House";
	}
	else if (is_flush)
	{
		return "Flush";
	}
	else if (is_straight)
	{
		return "Straight";
	}
	else if (three_of_a_kind_count == 1)
	{
		return "Three of a Kind";
	}
	else if (pairs_count == 2)
	{
		return "Two Pairs";
	}
	else if (pairs_count == 1)
	{
		return "One Pair";
	}
	else
	{
		return "High Card";
	}
}

int main()
{
	std::string hand;
	getline(std::cin, hand);

	std::cout << evaluate_poker_hand(hand) << std::endl;

	return 0;
}
