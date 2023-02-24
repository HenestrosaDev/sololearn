def letter_count(text, letter):
	count = 0
	for let in text:
		if let is letter:
			count += 1
	return count

text = input()
letter = input()

print(letter_count(text, letter))
