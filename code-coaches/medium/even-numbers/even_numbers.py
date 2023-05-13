def main():
    even_numbers_list = list(
        filter(lambda number_str: int(number_str) % 2 == 0, input().split())
    )
    even_numbers_str = " ".join(even_numbers_list)
    print(even_numbers_str)


if __name__ == "__main__":
    main()
