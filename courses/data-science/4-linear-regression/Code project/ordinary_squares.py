import numpy as np


def main():
    n, p = [int(x) for x in input().split()]
    x = []
    for i in range(n):
        x.append([float(x) for x in input().split()])

    y = [float(x) for x in input().split()]

    # Convert X and y to numpy arrays
    x = np.array(x)
    y = np.array(y)

    # Calculate the coefficients using OLS
    beta = ols(x, y)

    # Print the coefficients rounded to 2 decimal places
    print(np.round(beta, 2))


def ols(x, y):
    xt = x.transpose()
    xtx = np.linalg.inv(xt.dot(x))
    xty = xt.dot(y)
    beta = xtx.dot(xty)
    return beta


if __name__ == "__main__":
    main()
