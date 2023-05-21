import itertools


def calculate_word_rank(word):
    # Generate all permutations of the word
    permutations = set("".join(p) for p in itertools.permutations(word))

    # Sort the permutations alphabetically
    sorted_permutations = sorted(permutations)

    # Find the rank of the word in the sorted list
    rank = sorted_permutations.index(word) + 1

    return rank


def main():
    word = input()
    print(calculate_word_rank(word))


if __name__ == "__main__":
    main()
