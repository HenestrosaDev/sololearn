def can_buy_squirt_gun(score: int, squirt_gun_price: int) -> str:
    ratio = 12  # 12 points = 1 ticket
    tickets = score / ratio

    if tickets >= squirt_gun_price:
        return "Buy it!"
    else:
        return "Try again"


def main():
    score = int(input())
    squirt_gun_price = int(input())
    print(can_buy_squirt_gun(score, squirt_gun_price))


if __name__ == "__main__":
    main()
