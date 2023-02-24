colors = {
	'brown': 0,
	'blue': 1,
	'green': 2,
	'black': 3
}

data = [
	[23, 11, 5, 14],
	[8, 32, 20, 5]
]

color = colors[input()]

matched_eyes = 0
people_in_the_room = 0

for row in data:
	people_in_the_room += sum(row)
	matched_eyes += row[color]

percentage = int((matched_eyes / people_in_the_room) * 100)
print(percentage)
