def find_matching_expression(answer, expressions):
    for i, expression in enumerate(expressions):
        result = eval(expression)
        if result == answer:
            return i

    return None


def main():
    answer = int(input())
    expressions = input().split()

    index = find_matching_expression(answer, expressions)
    if index is not None:
        print(f"index {index}")
    else:
        print("none")


if __name__ == "__main__":
    main()
