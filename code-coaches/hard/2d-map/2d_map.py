def calculate_moves(map_str: str) -> int:
    map_rows = map_str.split(",")
    num_map_rows = len(map_rows)

    letter_to_find = "P"
    p1 = None
    p2 = None

    for i in range(num_map_rows):
        for j in range(num_map_rows):
            if map_rows[i][j] == letter_to_find:
                if p1 is None:
                    p1 = (i, j)
                else:
                    p2 = (i, j)

    # Calculate the number of moves using Manhattan distance formula
    moves = abs(p1[0] - p2[0]) + abs(p1[1] - p2[1])

    return moves


def main():
    map_str = input()
    print(calculate_moves(map_str))


if __name__ == "__main__":
    main()
