total = 0

for i in range(5):
	age = int(input())
	if age < 3:
		continue
	else:
		total += 100

print(total)
