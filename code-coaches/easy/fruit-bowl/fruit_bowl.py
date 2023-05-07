def get_apple_pies(fruit_count):
    apple_count = fruit_count // 2
    return apple_count // 3


def main():
    fruit_count = int(input())
    print(get_apple_pies(fruit_count))


if __name__ == "__main__":
    main()
