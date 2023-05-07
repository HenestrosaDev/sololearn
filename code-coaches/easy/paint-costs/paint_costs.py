from math import ceil


def get_total_paint_costs(num_colors: int) -> int:
    base_price = 40.0
    paint_price = 5.0
    tax_percent = 10.0

    subtotal = base_price + (paint_price * num_colors)
    total = ceil((subtotal / tax_percent) + subtotal)

    return total


def main():
    num_colors = int(input())
    print(get_total_paint_costs(num_colors))


if __name__ == "__main__":
    main()
