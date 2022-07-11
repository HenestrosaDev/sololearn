words = input().split()

for word in words:
	char_array = list(word)
	char_array.append(char_array[0])
	char_array.pop(0)
	final_word = ''.join(['', *char_array, 'ay'])
	print(final_word, end=' ')
