import math

myName = input()
agents = int(input())
people = list(input().split())
time_for_license = 20

people.append(myName)
people.sort()

for idx, person in enumerate(people):
	if person == myName:
		position_in_queue = math.ceil((idx + 1) / agents)
		waiting_time = position_in_queue * time_for_license
		print(waiting_time)
		break
