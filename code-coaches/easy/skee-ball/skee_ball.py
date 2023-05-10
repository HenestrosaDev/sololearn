def can_buy_squirt_gun(score: int, squirt_gun_price: int) -> bool:
    ratio = 12  # 12 points = 1 ticket
    tickets = score / ratio
    return tickets >= squirt_gun_price


def main():
    score = int(input())
    squirt_gun_price = int(input())

    if can_buy_squirt_gun(score, squirt_gun_price):
        print("Buy it!")
    else:
        print("Try again")


if __name__ == "__main__":
    main()
