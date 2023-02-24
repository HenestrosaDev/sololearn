year = int(input())

leap_condition_1 = year % 4 == 0
leap_condition_2 = year % 100 == 0
leap_condition_3 = year % 400 == 0

if leap_condition_1:
	if leap_condition_2:
		if leap_condition_3:
			print("Leap year")
		else:
			print("Not a leap year")
	else:
		print("Leap year")
else:
	print("Not a leap year")
