def calculate_area(balcony: str) -> int:
    height_a, width_a = map(int, balcony.split(","))
    area = height_a * width_a
    return area


def main():
    balcony_a_measures = input()
    balcony_b_measures = input()

    area_a = calculate_area(balcony_a_measures)
    area_b = calculate_area(balcony_b_measures)

    if area_a > area_b:
        print("Apartment A")
    else:
        print("Apartment B")


if __name__ == "__main__":
    main()
