def convert_from_12h_to_24h(time_12h: str) -> str:
    time, indicator = time_12h.split()
    hour, minute = map(int, time.split(":"))

    if indicator == "PM" and hour != 12:
        hour += 12
    elif indicator == "AM" and hour == 12:
        hour = 0

    return f"{hour:02}:{minute:02}"


def main():
    time_12h = input()
    print(convert_from_12h_to_24h(time_12h))


if __name__ == "__main__":
    main()
