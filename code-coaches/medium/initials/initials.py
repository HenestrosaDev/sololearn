def get_initials(name: str) -> str:
    name_split = name.split()
    return f"{name_split[0][0]}{name_split[1][0]}"


def main():
    num_names = int(input())
    names = [get_initials(input()) for _ in range(num_names)]
    print(" ".join(names))


if __name__ == "__main__":
    main()
