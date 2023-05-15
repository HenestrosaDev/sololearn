def get_total(prices: list[int]) -> float:
    tax = 1.07
    total = sum(price * tax if price < 20 else price for price in prices)
    total_rounded = round(total * 100) / 100
    return total_rounded


def main():
    prices = list(map(int, input().split(",")))
    print(get_total(prices))


if __name__ == "__main__":
    main()
