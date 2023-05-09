def reverse_char(char: str) -> str:
    if char.isalpha():
        ascii_lowercase_a = 97
        ascii_lowercase_z = 122
        return chr(ascii_lowercase_z - ord(char.lower()) + ascii_lowercase_a)

    return char


def encode_message(message: str) -> str:
    return "".join(map(reverse_char, message))


def main():
    message = input()
    print(encode_message(message))


if __name__ == "__main__":
    main()
