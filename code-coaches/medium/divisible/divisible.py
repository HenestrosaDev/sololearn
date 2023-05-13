def is_divisible_by_all(num: int, dividers: list[int]) -> bool:
    for divider in dividers:
        if num % divider != 0:
            return False

    return True


def main():
    num = int(input())
    dividers = list(map(int, input().split()))

    if is_divisible_by_all(num, dividers):
        print("divisible by all")
    else:
        print("not divisible by all")


if __name__ == "__main__":
    main()
