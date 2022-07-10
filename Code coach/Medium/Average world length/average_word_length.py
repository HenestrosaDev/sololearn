import math

words = input().split(" ")
wordsNumber = 0
totalLength = 0

for word in words:
	wordsNumber += 1
	for char in word:
		if char.isalpha():
			totalLength += 1

averageLength = math.ceil(totalLength / wordsNumber)
print(averageLength)
