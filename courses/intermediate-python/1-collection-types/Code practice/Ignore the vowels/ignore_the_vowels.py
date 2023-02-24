def remove_vowels(word: str):
	vowels = ['a', 'e', 'i', 'o', 'u']
	return [ch for ch in word if ch not in vowels]

word = input()
print(remove_vowels(word))
