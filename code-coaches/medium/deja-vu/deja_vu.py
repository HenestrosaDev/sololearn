def check_deja_vu(chars):
    previous_char = None
    is_repeated = False

    for char in chars:
        if char == previous_char:
            print("Deja Vu")
            is_repeated = True
            break
        else:
            previous_char = char

    if not is_repeated:
        print("Unique")


def main():
    input_str = input()
    check_deja_vu(input_str)


if __name__ == "__main__":
    main()
