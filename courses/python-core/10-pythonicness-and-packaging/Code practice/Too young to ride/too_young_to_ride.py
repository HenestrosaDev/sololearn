ages = []
i = 0

while i < 3:
	age = int(input())
	if age < 16:
		print('Too young!')
		break

	ages.append(age)
	i += 1
else:
   print('Get ready!')
