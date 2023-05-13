def to_rgb(cyan: float, magenta: float, yellow: float, key: float) -> str:
    red = round(255 * (1 - cyan) * (1 - key))
    green = round(255 * (1 - magenta) * (1 - key))
    blue = round(255 * (1 - yellow) * (1 - key))
    return f"{red},{green},{blue}"


def main():
    cyan = float(input())
    magenta = float(input())
    yellow = float(input())
    key = float(input())
    print(to_rgb(cyan, magenta, yellow, key))


if __name__ == "__main__":
    main()
