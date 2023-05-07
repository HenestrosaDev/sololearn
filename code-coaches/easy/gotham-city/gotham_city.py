def is_backup_needed(criminals: int) -> str:
    if criminals < 5:
        return "I got this!"
    elif 5 <= criminals <= 10:
        return "Help me Batman"
    elif criminals > 10:
        return "Good Luck out there!"


def main():
    criminals = int(input())
    print(is_backup_needed(criminals))


if __name__ == "__main__":
    main()
