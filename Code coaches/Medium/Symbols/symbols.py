encoded = input()
decoded = ''.join(
	[char for char in encoded if char.isalnum() or char.isspace()]
)
print(decoded)
