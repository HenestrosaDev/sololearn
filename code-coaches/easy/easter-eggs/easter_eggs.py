def main():
    total_eggs = int(input())
    eggs_found_by_me = int(input())
    eggs_found_by_friend = int(input())
    eggs_found = eggs_found_by_me + eggs_found_by_friend

    if eggs_found == total_eggs:
        print("Candy Time")
    else:
        print("Keep Hunting")


if __name__ == "__main__":
    main()
