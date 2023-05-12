def sum_multiples(num: int, *multiples: int) -> int:
    sum_of_multiples = sum(x for x in range(num) if any(x % m == 0 for m in multiples))
    return sum_of_multiples


def main():
    num = int(input())
    print(sum_multiples(num, 3, 5))


if __name__ == "__main__":
    main()
