def main():
    num = int(input())
    num_bin = bin(num)
    num_of_ones_in_bin = num_bin.count("1")
    print(num_of_ones_in_bin)


if __name__ == "__main__":
    main()
