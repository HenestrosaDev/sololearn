import re

pattern = r'^m[a-zA-Z]{2}e$'
word = input()

if re.match(pattern, word):
	print('Match')
else:
	print('No match')
