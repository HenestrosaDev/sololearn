vowels = ['a', 'e', 'i', 'o', 'u']
vowels_count = 0

text = input()
for ch in text:
	if ch in vowels:
		vowels_count += 1

print(vowels_count)
