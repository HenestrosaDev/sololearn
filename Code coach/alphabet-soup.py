import numpy as np

def isInSoup(message, letters):
	sortedMessage = np.array(''.join(sorted(message)).strip())
	sortedLetters = np.array(''.join(sorted(letters)).strip())
	return (sortedLetters == sortedMessage).all()


print(isInSoup(" hola amigos que tal", "aahlomigostalqu ")) # False
print(isInSoup("manolo makina", "aikamnoloman"))  # True
print(isInSoup("esta está mal", "lamastestá")) # False
