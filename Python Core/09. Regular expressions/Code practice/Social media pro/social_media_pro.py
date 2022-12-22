import re

def get_matches(pattern, text):
	return '\n'.join(re.findall(pattern, text))

text = input()
pattern = r'#\w+'
print(get_matches(pattern, text))
