def make_carrot_cake(num_carrots: int, num_boxes: int) -> str:
    num_carrots_leftover = num_carrots % num_boxes
    num_carrots_to_make_a_cake = 7

    if num_carrots_leftover >= num_carrots_to_make_a_cake:
        return "Cake Time"
    else:
        num_additional_carrots_need = num_carrots_to_make_a_cake - num_carrots_leftover
        return f"I need to buy {num_additional_carrots_need} more"


def main():
    num_carrots = int(input())
    num_boxes = int(input())
    print(make_carrot_cake(num_carrots, num_boxes))


if __name__ == "__main__":
    main()
