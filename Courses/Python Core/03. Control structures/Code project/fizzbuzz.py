def odd_fizzbuzz(num: int):
    for x in range(1, num, 2):
        output = ""

        if x % 3 == 0:
            output += "Solo"

        if x % 5 == 0:
            output += "Learn"

        if not output:
            print(x)
        else:
            print(output)


if __name__ == "__main__":
    n = int(input())
    odd_fizzbuzz(n)
