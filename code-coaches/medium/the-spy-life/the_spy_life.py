def decode_message(message: str) -> str:
    message_without_symbols = "".join(
        [char for char in message if char.isalpha() or char.isspace()]
    )
    flipped_message_without_symbols = message_without_symbols[::-1]
    return flipped_message_without_symbols


def main():
    encoded_message = input()
    print(decode_message(encoded_message))


if __name__ == "__main__":
    main()
