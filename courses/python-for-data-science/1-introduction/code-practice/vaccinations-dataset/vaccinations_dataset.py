vac_nums = [
	0, 0, 0, 0, 0,
	1, 1, 1, 1, 1, 1, 1, 1,
	2, 2, 2, 2,
	3, 3, 3
]

num_sum = 0.0
for num in vac_nums:
	num_sum += num

mean = num_sum / len(vac_nums)

diff = 0.0
for num in vac_nums:
	diff += (num - mean) ** 2

variance = diff / len(vac_nums)
print(variance)
