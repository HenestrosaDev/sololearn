from math import floor


def get_savings(prices: list[float]) -> int:
    # We pay full price for the most expensive item, so we remove it from the list
    prices.remove(max(prices))

    discount = 0.3
    savings_pre_tax = sum(price * discount for price in prices)

    tax = 1.07
    savings_post_tax = savings_pre_tax * tax

    return floor(savings_post_tax)


def main():
    prices = list(map(float, input().split(",")))
    print(get_savings(prices))


if __name__ == "__main__":
    main()
