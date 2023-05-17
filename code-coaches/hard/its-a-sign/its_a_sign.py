def is_palindrome(word: str) -> bool:
    return word == word[::-1]


def contains_palindrome(words: list[str]) -> bool:
    for word in words:
        if is_palindrome(word):
            return True

    return False


def main():
    words = [input() for _ in range(4)]

    if contains_palindrome(words):
        print("Open")
    else:
        print("Trash")


if __name__ == "__main__":
    main()
