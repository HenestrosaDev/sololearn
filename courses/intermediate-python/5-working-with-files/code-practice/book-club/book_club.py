with open("/usercode/files/books.txt") as f:
	index = 1
	for line in f.readlines():
		words = line.count(' ') + 1
		print(f'Line {index}: {words} words')
		index += 1
