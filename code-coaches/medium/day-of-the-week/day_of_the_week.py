from datetime import datetime


def get_day_of_week(date_string):
    try:
        date = datetime.strptime(date_string, "%m/%d/%Y")
    except ValueError:
        date = datetime.strptime(date_string, "%B %d, %Y")
    return date.strftime("%A")


def main():
    date_string = input()
    day_of_week = get_day_of_week(date_string)
    print(day_of_week)


if __name__ == "__main__":
    main()
