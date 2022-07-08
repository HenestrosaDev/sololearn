import math

while True:
	houses = int(input())
	if (houses >= 3):
		break

billProbability = math.ceil(100 / houses * 2)

print(billProbability)
