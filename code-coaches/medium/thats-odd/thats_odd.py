def sum_even_numbers(numbers: list[int]) -> int:
    return sum(num for num in numbers if num % 2 == 0)


def main():
    numbers_num = int(input())
    numbers = []
    for i in range(numbers_num):
        numbers.append(int(input()))

    print(sum_even_numbers(numbers))


if __name__ == "__main__":
    main()
