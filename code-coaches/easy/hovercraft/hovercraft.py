def hovercraft_profit_status(units_sold: int) -> str:
    sell_price = 3_000_000
    cost_price = 2_000_000
    insurance_price = 1_000_000

    units_built = 10
    expenses = (units_built * cost_price) + insurance_price
    revenue = units_sold * sell_price

    if revenue > expenses:
        return "Profit"
    elif revenue < expenses:
        return "Loss"
    else:
        return "Broke Even"


def main():
    units_sold = int(input())
    print(hovercraft_profit_status(units_sold))


if __name__ == "__main__":
    main()
