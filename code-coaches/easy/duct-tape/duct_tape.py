from math import ceil


def get_area(height: int, width: int) -> int:
    return height * width


def to_inches(feet: int) -> int:
    return feet * 12


def get_duct_tapes_needed(height: int, width: int) -> int:
    # Everything is calculated in inches
    duct_tape_height = 720
    duct_tape_width = 2

    door_area_both_sides = get_area(height, width) * 2
    duct_tape_area = get_area(duct_tape_height, duct_tape_width)

    duct_tapes_needed = ceil(door_area_both_sides / duct_tape_area)
    return duct_tapes_needed


def main():
    door_height_feet = int(input())
    door_width_feet = int(input())

    door_height_inches = to_inches(door_height_feet)
    door_width_inches = to_inches(door_width_feet)

    print(get_duct_tapes_needed(door_height_inches, door_width_inches))


if __name__ == "__main__":
    main()
