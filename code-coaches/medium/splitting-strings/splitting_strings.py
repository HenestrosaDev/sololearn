def split_string(word: str, num_parts: int, separator: str = "-") -> str:
    parts = [word[i : i + num_parts] for i in range(0, len(word), num_parts)]
    return separator.join(parts)


def main():
    word = input()
    num_parts = int(input())
    print(split_string(word, num_parts))


if __name__ == "__main__":
    main()
