def remove_symbols(encoded: str) -> str:
    # symbols: a char that is not alphanumeric or a space
    return "".join([char for char in encoded if char.isalnum() or char.isspace()])


def main():
    encoded = input()
    print(remove_symbols(encoded))


if __name__ == "__main__":
    main()
