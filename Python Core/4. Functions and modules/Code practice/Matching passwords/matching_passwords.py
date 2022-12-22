def validate(text1, text2):
	if text1 == text2:
		print('Correct')
	else:
		print('Wrong')

password = input()
repeat = input()
validate(password, repeat)
