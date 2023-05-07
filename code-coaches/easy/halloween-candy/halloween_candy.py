from math import ceil


def main():
    while True:
        num_houses = int(input())
        if num_houses >= 3:
            break

    bill_probability = ceil(100 / num_houses * 2)
    print(bill_probability)


if __name__ == "__main__":
    main()
