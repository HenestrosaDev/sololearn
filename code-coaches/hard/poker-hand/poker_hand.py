from collections import Counter


def are_numbers_consecutive(lst):
    return sorted(lst) == list(range(min(lst), max(lst) + 1))


def get_duplicates(lst):
    """
    Returns a list of duplicate elements and their counts in the given list.

    :param lst: The input list
    :return: A list of tuples, where each tuple contains the duplicate value and its count.

    Example:
        get_duplicates([1, 2, 2, 3, 4, 4, 4])
        [(2, 2), (4, 3)]
    """
    counter = Counter(lst)
    return [(value, count) for value, count in counter.items() if count > 1]


def evaluate_poker_hand(cards: list[str]) -> str:
    # fmt: off
    deck_cards_value_sorted = [
        "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "K", "Q"
    ]
    # fmt: on
    values = [card[:-1] for card in cards]
    suites = [card[-1] for card in cards]

    duplicate_values = get_duplicates(values)
    duplicate_suites = get_duplicates(suites)

    if not duplicate_values:
        values_indexes = [
            deck_cards_value_sorted.index(value)
            for value in values
            if value in deck_cards_value_sorted
        ]

        # all cards of same suit
        if duplicate_suites and duplicate_suites[0][1] == 5:
            if {"10", "J", "Q", "K", "A"} == set(values):
                return "Royal Flush"  # 10, Jack, Queen, King, Ace, in same suit
            elif are_numbers_consecutive(values_indexes):
                return "Straight Flush"  # all cards are consecutive values of same suit
            else:
                return "Flush"  # all cards of the same suit
        elif are_numbers_consecutive(values_indexes):
            return "Straight"  # all cards are consecutive values
    else:
        num_cards_same_value = [
            duplicate_value[1] for duplicate_value in duplicate_values
        ]

        if 3 in num_cards_same_value and 2 in num_cards_same_value:
            return "Full House"  # three of a kind and a pair
        elif 4 in num_cards_same_value:
            return "Four of a Kind"  # four cards of the same value
        elif 3 in num_cards_same_value:
            return "Three of a Kind"  # three cards of the same value
        elif num_cards_same_value.count(2) == 2:
            return "Two Pairs"  # two different pairs
        elif num_cards_same_value.count(2) == 1:
            return "One Pair"  # two cards of the same value

    return "High Card"  # highest value card


def main():
    cards = input().split()
    print(evaluate_poker_hand(cards))


if __name__ == "__main__":
    main()
