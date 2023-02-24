with open("/usercode/files/books.txt", "r") as f:
	for line in f.readlines():
		split_line = line.split(' ')
		encoded_word = ''

		for word in split_line:
			encoded_word += word[0]

		print(encoded_word)
