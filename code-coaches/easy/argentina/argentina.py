from decimal import Decimal


def lower_currency_after_conversion(ars: Decimal, usd: Decimal) -> str:
    ars_to_usd_rate = Decimal("0.02")
    converted_usd = ars * ars_to_usd_rate

    if converted_usd < usd:
        return "Pesos"
    else:
        return "Dollars"


def main():
    # Get the input values from the user
    ars = Decimal(input())
    usd = Decimal(input())

    # Call the function to get the result
    result = lower_currency_after_conversion(ars, usd)

    # Print the result
    print(result)


if __name__ == "__main__":
    main()
