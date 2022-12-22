cart = [15, 42, 120, 9, 5, 380]

discount = int(input())
total = 0

for item_price in cart:
	total += item_price - (item_price * discount / 100)

print(total)
