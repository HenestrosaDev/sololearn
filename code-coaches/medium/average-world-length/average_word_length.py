from math import ceil

# Short approach
# from string import punctuation


def get_average_word_length(words: list[str]) -> int:
    words_number = len(words)
    total_length = 0

    # Long approach
    for word in words:
        for char in word:
            if char.isalpha():
                total_length += 1

    # Short approach
    # total_length = sum(len(word.translate(str.maketrans('', '', punctuation))) for word in sentence)

    average_length = ceil(total_length / words_number)
    return average_length


def main():
    words = input().split(" ")
    print(get_average_word_length(words))


if __name__ == "__main__":
    main()
