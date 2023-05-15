def get_sound(num_rice_krispies: int) -> str:
    if num_rice_krispies % 3 == 0:
        return "Pop"
    elif num_rice_krispies % 2 != 0:
        return "Snap"
    else:
        return "Crackle"


def main():
    num_rice_krispies_list = [int(input()) for _ in range(6)]
    sounds = list(map(get_sound, num_rice_krispies_list))
    print(" ".join(sounds))


if __name__ == "__main__":
    main()
