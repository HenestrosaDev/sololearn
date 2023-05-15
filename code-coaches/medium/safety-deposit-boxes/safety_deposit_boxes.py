def calculate_time_to_get_item(items: list[str], item_to_find: str) -> int:
    time = 5
    for item in items:
        if item != item_to_find:
            time += 5
        else:
            break

    return time


def main():
    items = input().split(",")
    item_to_find = input()
    calculate_time_to_get_item(items, item_to_find)


if __name__ == "__main__":
    main()
