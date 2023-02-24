import numpy as np

# Take the number of rows
r = int(input())

# Create a list from input
lst = [float(x) for x in input().split()]

# Create a numpy array with the input list
arr = np.array(lst)

# Rounding values to the second decimal
arr = np.around(arr, decimals=2)

# Reshaping the 2d-array to 'r' rows and 'arr.size // r' columns
arr = np.reshape(arr, (r, arr.size // r))

print(arr)
