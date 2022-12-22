def hashtagGen(text):
	return f'#{text}'

text = input().replace(' ', '')
print(hashtagGen(text))
