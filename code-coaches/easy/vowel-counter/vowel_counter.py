def get_vowels_count(sentence: str) -> int:
    return len([char for char in sentence if char.lower() in "aeiou"])


def main():
    sentence = input()
    print(get_vowels_count(sentence))


if __name__ == "__main__":
    main()
