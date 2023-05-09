def to_pig_latin(sentence: str) -> str:
    words = sentence.split()
    pig_latin_words = []
    for word in words:
        pig_latin_word = word[1:] + word[0] + "ay"
        pig_latin_words.append(pig_latin_word)

    return " ".join(pig_latin_words)


def main():
    sentence = input()
    print(to_pig_latin(sentence))


if __name__ == "__main__":
    main()
