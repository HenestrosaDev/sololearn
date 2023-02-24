import re

# In a real use-case, we would use the num2word library
nums_to_word = {
	"0": "zero",
	"1": "one",
	"2": "two",
	"3": "three",
	"4": "four",
	"5": "five",
	"6": "six",
	"7": "seven",
	"8": "eight",
	"9": "nine",
	"10": "ten",
}

text = input()
pattern = re.compile(r'\b\d+\b')

for m in re.finditer(pattern, text):
	if m.group(0) in nums_to_word.keys():
		text = text.replace(m.group(0), nums_to_word[m.group(0)], 1)

print(text)
