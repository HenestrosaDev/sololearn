def get_total_cost(order: list[str]) -> int:
    menu = {
        "Pizza": 6.0,
        "Nachos": 6.0,
        "Cheeseburger": 10.0,
        "Water": 4.0,
        "Coke": 5.0,
    }
    subtotal = sum(menu.get(item, 5.0) for item in order)
    tax = 1.07
    total = subtotal * tax
    return round(total, 2)


def main():
    order = input().split()
    print(get_total_cost(order))


if __name__ == "__main__":
    main()
