def sum_array(arr):
	total = 0
	for i in arr:
		total += i
	return total

data = [
	7, 
	5, 
	6.9, 
	1, 
	8, 
	42, 
	33, 
	128, 
	1024, 
	2, 
	8, 
	11, 
	0.4,
	1024, 
	66, 
	809, 
	11, 
	8.9, 
	1.1, 
	3.42, 
	9, 
	100, 
	444, 
	78
]

data.remove(max(data))
data.remove(min(data))

print(sum_array(data))
