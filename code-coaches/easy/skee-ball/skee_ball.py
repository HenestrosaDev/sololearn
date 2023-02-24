score = int(input())
squirt_gun_price = int(input())

ratio = 12  # 12 points = 1 ticket
tickets = score / ratio

if tickets >= squirt_gun_price:
	print("Buy it!")
else:
	print("Try again")
