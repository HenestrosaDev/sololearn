chars = input()
previous_char = None
is_repeated = False

for char in chars:
	if char is previous_char:
		print('Deja Vu')
		is_repeated = True
		break
	else:
		previous_char = char

if (not is_repeated):
	print('Unique')
