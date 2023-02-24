units_sold = int(input())

sell_price = 3_000_000
cost_price = 2_000_000
insurance_price = 1_000_000

units_built = 10
expenses = (units_built * cost_price) + insurance_price
benefit = units_sold * sell_price

if benefit > expenses:
	print("Profit")
elif benefit < expenses:
	print("Loss")
else:
	print("Broke Even")
