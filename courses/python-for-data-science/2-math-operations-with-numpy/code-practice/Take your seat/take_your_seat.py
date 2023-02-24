import numpy as np

data = np.array([1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0])

columns = 5
seats = data.reshape(data.size // columns, columns)

row = int(input())
print(seats[row])
