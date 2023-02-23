import math

while True:
	houses = int(input())
	if (houses >= 3):
		break

bill_probability = math.ceil(100 / houses * 2)

print(bill_probability)
