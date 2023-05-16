def get_pi_decimal_at(index: int) -> str:
    pi_decimals = "14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270938521105559644622948954930381964428"
    decimal = pi_decimals[index]
    return decimal


def main():
    # - 1 to convert the index to 0-based index
    index = int(input()) - 1
    print(get_pi_decimal_at(index))


if __name__ == "__main__":
    main()
