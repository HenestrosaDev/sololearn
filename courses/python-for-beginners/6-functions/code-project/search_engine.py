def search(text, word):
	if word in text:
		return "Word found"
	else:
		return "Word not found"

text = input()
word = input()

print(search(text, word))
