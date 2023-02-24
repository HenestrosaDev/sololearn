menu = ['Fries', 'Sandwich', 'Cheeseburger', 'Coffee', 'Soda']

try:
	index = int(input())
	print(menu[index])
except:
	print("Item not found")
else:
	print("Thanks for your order")
