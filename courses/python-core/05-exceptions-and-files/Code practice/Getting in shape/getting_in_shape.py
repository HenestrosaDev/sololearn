with open('/usercode/files/pull_ups.txt') as f:
	n = int(input())

	result = f.readlines()
	print(result[n])
