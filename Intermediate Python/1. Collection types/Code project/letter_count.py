def word_counter(text: str):
	word_counter_dict = {}

	for char in text:
		if char in word_counter_dict:
			word_counter_dict[char] += 1
		else:
			word_counter_dict[char] = 1

	return word_counter_dict

text = input()
result = word_counter(text)
print(result)
