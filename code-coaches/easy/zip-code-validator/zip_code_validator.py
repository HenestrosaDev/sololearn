def is_zip_code_valid(zip_code) -> bool:
    try:
        zip_code_int = int(zip_code)
        return len(zip_code) == 5

    except ValueError:
        return False


def main():
    zip_code = input()

    if is_zip_code_valid(zip_code):
        print("true")
    else:
        print("false")


if __name__ == "__main__":
    main()
