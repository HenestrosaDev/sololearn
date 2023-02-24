def fibonacci(x):
	if x <= 1:
		return x
	else:
		return fibonacci(x-1) + fibonacci(x-2)

num = int(input())

for x in range(num):
	print(fibonacci(x))
