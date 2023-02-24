with open("/usercode/files/books.txt") as file:
	number_of_bytes = int(input())
	print(file.read(number_of_bytes))
