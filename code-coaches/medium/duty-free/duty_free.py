def is_on_budget(items_price_eur: list[float]) -> bool:
    usd_eur_rate = 1.1
    limit_price_usd = 20

    for item_price_eur in items_price_eur:
        item_price_usd = item_price_eur * usd_eur_rate
        if item_price_usd > limit_price_usd:
            return False

    return True


def main():
    items_price_eur = list(map(float, input().split()))

    if is_on_budget(items_price_eur):
        print("On to the terminal")
    else:
        print("Back to the store")


if __name__ == "__main__":
    main()
