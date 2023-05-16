def q_sequence(n: int) -> int:
    if n <= 2:
        return 1
    else:
        return q_sequence(n - q_sequence(n - 1)) + q_sequence(n - q_sequence(n - 2))


def main():
    n = int(input())
    print(q_sequence(n))


if __name__ == "__main__":
    main()
