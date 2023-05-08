month_to_num = {
    "January": "1",
    "February": "2",
    "March": "3",
    "April": "4",
    "May": "5",
    "June": "6",
    "July": "7",
    "August": "8",
    "September": "9",
    "October": "10",
    "November": "11",
    "December": "12",
}


def get_eu_date(us_date: str) -> str:
    if "/" in us_date:
        us_date_split = us_date.split("/")
        eu_date = f"{us_date_split[1]}/{us_date_split[0]}/{us_date_split[2]}"
    else:
        us_date_split = us_date.split(" ")
        month = month_to_num[us_date_split[0]]
        day = us_date_split[1][:-1]
        eu_date = f"{day}/{month}/{us_date_split[2]}"

    return eu_date


def main():
    us_date = input()
    print(get_eu_date(us_date))


if __name__ == "__main__":
    main()
