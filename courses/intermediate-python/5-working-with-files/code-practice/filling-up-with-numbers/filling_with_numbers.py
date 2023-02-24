with open("numbers.txt", "w+") as file:
	n = int(input())

	for i in range(1, n + 1):
		file.write(f'\n{str(i)}')

with open("numbers.txt", "r") as file:
	print(file.read())
