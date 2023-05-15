def contains_name_buddy(names: list[str], my_name: str) -> bool:
    return any(name[0] == my_name[0] for name in names)


def main():
    names = input().split()
    my_name = input()

    if contains_name_buddy(names, my_name):
        print("Compare notes")
    else:
        print("No such luck")


if __name__ == "__main__":
    main()
