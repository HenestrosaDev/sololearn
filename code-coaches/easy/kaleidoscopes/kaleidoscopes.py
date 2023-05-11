def get_total(num_kaleidoscopes: int) -> float:
    price = 5
    tax = 1.07

    if num_kaleidoscopes > 1:
        discount = 0.9
        subtotal = num_kaleidoscopes * price * discount
    else:
        subtotal = price

    total = subtotal * tax
    return round(total, 2)


def main():
    num_kaleidoscopes = int(input())
    print(get_total(num_kaleidoscopes))


if __name__ == "__main__":
    main()
