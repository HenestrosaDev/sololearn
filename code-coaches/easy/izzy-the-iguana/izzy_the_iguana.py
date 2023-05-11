def get_snack_points(snacks: list[str]) -> int:
    snacks_dict = {
        "Mango": 9,
        "Lettuce": 5,
        "Carrot": 4,
        "Cheeseburger": 0,
    }
    points = sum(snacks_dict.get(item, 0) for item in snacks)
    return points


def main():
    snacks = input().split()

    if get_snack_points(snacks) >= 10:
        print("Come on Down!")
    else:
        print("Time to wait")


if __name__ == "__main__":
    main()
