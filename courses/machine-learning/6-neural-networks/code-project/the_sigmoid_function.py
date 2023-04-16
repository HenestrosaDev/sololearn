import math


def get_sigmoid_value(w1, w2, x1, x2, b):
    return (w1 * x1) + (w2 * x2) + b


def get_node_output(sigmoid_value):
    return 1 / (1 + math.e ** -sigmoid_value)


def main():
    w1, w2, b, x1, x2 = [float(x) for x in input().split()]
    sigmoid_value = get_sigmoid_value(w1, w2, x1, x2, b)
    node_output = get_node_output(sigmoid_value)
    print(round(node_output, 4))


if __name__ == "__main__":
    main()
