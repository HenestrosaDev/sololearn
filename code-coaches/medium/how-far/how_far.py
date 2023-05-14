def get_blocks_between_house_and_pond(layout: str) -> int:
    # Find the indices of the money, thief, and guards on the casino floor
    house_index = layout.find("H")
    pond_index = layout.find("P")
    block_indices = [i for i, char in enumerate(layout) if char == "B"]

    return sum(
        min(house_index, pond_index) < block_index < max(house_index, pond_index)
        for block_index in block_indices
    )


def main():
    layout = input()
    print(get_blocks_between_house_and_pond(layout))


if __name__ == "__main__":
    main()
