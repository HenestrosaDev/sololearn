score = int(input())
squirtGunPrice = int(input())

ratio = 12  # 12 points = 1 ticket
tickets = score / ratio

if tickets >= squirtGunPrice:
	print("Buy it!")
else:
	print("Try again")
