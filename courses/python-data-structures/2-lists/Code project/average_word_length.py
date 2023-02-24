text = input()
text_list = text.split()
text_length = 0

for word in text_list:
	text_length += len(word)

avg_length = text_length / len(text_list)
print(avg_length)
