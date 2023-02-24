import math

words = input().split(" ")
words_number = 0
total_length = 0

for word in words:
	words_number += 1
	for char in word:
		if char.isalpha():
			total_length += 1

average_length = math.ceil(total_length / words_number)
print(average_length)
