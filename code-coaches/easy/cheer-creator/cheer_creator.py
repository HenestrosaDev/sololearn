def get_cheer(yards):
    if yards > 10:
        return "High Five"
    elif yards < 1:
        return "shh"
    else:
        return "Ra!" * yards


def main():
    yards = int(input())
    print(get_cheer(yards))


if __name__ == "__main__":
    main()
