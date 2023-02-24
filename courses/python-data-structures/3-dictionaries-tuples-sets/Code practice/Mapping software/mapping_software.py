import math

points = [
	(12, 55),
	(880, 123),
	(64, 64),
	(190, 1024),
	(77, 33),
	(42, 11),
	(0, 90)
]

distances = []

for idx, (x, y) in enumerate(points):
	distances.append(math.sqrt((x ** 2) + (y ** 2)))

print(min(distances))
