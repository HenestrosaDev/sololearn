import numpy as np

x = np.arange(1, 100)
print(x[(x % 3 == 0) & (x % 5 == 0)])
