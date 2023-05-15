def is_each_number_greater_than_the_sum(nums: list[int]) -> bool:
    for idx, num in enumerate(nums):
        if num < sum(nums[:idx]):
            return False

    return True


def main():
    nums_length = int(input())
    nums = [int(input()) for _ in range(nums_length)]
    if is_each_number_greater_than_the_sum(nums):
        print("true")
    else:
        print("false")


if __name__ == "__main__":
    main()
