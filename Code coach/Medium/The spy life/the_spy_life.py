encoded = input()
decoded = ''.join(
	[char for char in encoded if char.isalpha() or char.isspace()]
)
print(decoded[::-1])
