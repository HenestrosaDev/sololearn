items_list = input().split()
menu = {"Pizza": 6.0, "Nachos": 6.0, "Cheeseburger": 10.0, "Water": 4.0, "Coke": 5.0}
subtotal = sum(menu.get(item, 5.0) for item in items_list)
total = subtotal * 1.07
print(round(total, 2))
