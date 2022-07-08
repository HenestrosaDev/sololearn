length = int(input())
numbers = []

for i in range(length):
	number = int(input())
	if number % 2 == 0:
		numbers.append(number)

print(sum(numbers))
