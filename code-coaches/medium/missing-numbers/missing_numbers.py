def get_missing_numbers_in_sequence(nums: list[int]) -> list[int]:
    return [num for num in range(min(nums), max(nums)) if num not in nums]


def main():
    list_length = int(input())
    nums = [int(input()) for _ in range(list_length)]
    missing_numbers_str = " ".join(map(str, get_missing_numbers_in_sequence(nums)))
    print(missing_numbers_str)


if __name__ == "__main__":
    main()
