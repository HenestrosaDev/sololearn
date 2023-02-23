import collections

def is_message_in_soup(message: str, soup: str) -> bool:
	message_letters = collections.Counter(message)

	for letter in soup:
		if letter not in message_letters or message_letters[letter] == 0:
			return False
		message_letters[letter] -= 1

	return True
