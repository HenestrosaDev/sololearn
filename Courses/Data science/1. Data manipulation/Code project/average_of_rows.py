import numpy as np

n, p = [int(x) for x in input().split()]
nums = np.zeros(shape=(n, p))

for z in range(n):
	nums[z] = [float(x) for x in input().split()]

mean = np.mean(nums, axis=1)
print(np.around(mean, decimals=2))
