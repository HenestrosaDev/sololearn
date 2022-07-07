words = input().split()

for word in words:
	charArray = list(word)
	charArray.append(charArray[0])
	charArray.pop(0)
	finalWord = ''.join(['', *charArray, 'ay'])
	print(finalWord, end=' ')
