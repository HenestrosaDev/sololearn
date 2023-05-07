def distribute_popsicles(popsicles: int, siblings: int) -> str:
    if popsicles % siblings == 0:
        return "give away"
    else:
        return "eat them yourself"


def main():
    while True:
        siblings = int(input())
        if siblings != 0:
            break

    popsicles = int(input())

    print(distribute_popsicles(popsicles, siblings))


if __name__ == "__main__":
    main()
