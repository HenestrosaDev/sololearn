txt = input()
list = txt.split()
longestWord = ""

for word in list:
	if len(word) > len(longestWord):
		longestWord = word

print(longestWord)
