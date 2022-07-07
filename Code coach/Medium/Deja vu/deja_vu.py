chars = input()
previousChar = None
isRepeated = False

for char in chars:
	if char is previousChar:
		print('Deja Vu')
		isRepeated = True
		break
	else:
		previousChar = char

if (not isRepeated):
	print('Unique')
