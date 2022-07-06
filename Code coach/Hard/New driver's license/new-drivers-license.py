import math

myName = input()
agents = int(input())
people = list(input().split())
timeForLicense = 20

people.append(myName)
people.sort()

for idx, person in enumerate(people):
	if person == myName:
		positionInQueue = math.ceil((idx + 1) / agents)
		waitingTime = positionInQueue * timeForLicense
		print(waitingTime)
		break
