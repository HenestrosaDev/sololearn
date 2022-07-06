txt = input()
list = txt.split()

longestWord = ""
longestWordCount = 0

for word in list:
	if len(word) > longestWordCount:
		longestWordCount = len(word)
		longestWord = word

print(longestWord)
