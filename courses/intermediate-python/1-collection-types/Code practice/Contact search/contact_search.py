contacts = [
	('James', 42),
	('Amy', 24),
	('John', 31),
	('Amanda', 63),
	('Bob', 18)
]

name = input()

for contact in contacts:
	if contact[0] == name:
		print(f'{name} is {contact[1]}')
		break
else:
	print("Not Found")
