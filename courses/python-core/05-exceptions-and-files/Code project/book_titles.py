with open("/usercode/files/books.txt", "r") as file:
	for line in file:
		length = len(line)
		
		if "\n" in line:
			length -= 1

		print(line[0] + str(length))
