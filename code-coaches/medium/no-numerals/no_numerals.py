def replace_numbers_with_words(sentence):
    number_words = [
        "zero",
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine",
        "ten",
    ]

    words = sentence.split()
    updated_words = []
    for word in words:
        if word.isdigit() and int(word) <= 10:
            updated_words.append(number_words[int(word)])
        else:
            updated_words.append(word)

    return " ".join(updated_words)


def main():
    sentence = input()
    print(replace_numbers_with_words(sentence))


if __name__ == "__main__":
    main()
