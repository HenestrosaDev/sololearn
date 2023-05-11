def is_isogram(word: str) -> bool:
    # set() function to remove duplicate characters in the word
    # then checks if the length of the original word is equal to the length of the set
    return len(word) == len(set(word.lower()))


def main():
    word = input()
    if is_isogram(word):
        print("true")
    else:
        print("false")


if __name__ == "__main__":
    main()
