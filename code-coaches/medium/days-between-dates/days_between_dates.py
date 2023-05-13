from datetime import datetime


def get_num_days_between(from_str: str, to_str: str) -> int:
    date_format = "%B %d, %Y"

    from_date = datetime.strptime(from_str, date_format)
    to_date = datetime.strptime(to_str, date_format)

    delta = to_date - from_date
    return delta.days


def main():
    from_str = input()
    to_str = input()
    print(get_num_days_between(from_str, to_str))


if __name__ == "__main__":
    main()
