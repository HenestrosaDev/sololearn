def to_snake_case(camel_case_string: str) -> str:
    snake_case_string = ""

    for i, char in enumerate(camel_case_string):
        if i != 0:
            previous_char = camel_case_string[i - 1]
            if (
                char.upper() == char
                and previous_char.isalpha()
                or (char.isalpha() and previous_char.isdigit())
            ):
                snake_case_string += "_"

        snake_case_string += char.lower()

    return snake_case_string


def main():
    camel_case_string = input()
    print(to_snake_case(camel_case_string))


if __name__ == "__main__":
    main()
