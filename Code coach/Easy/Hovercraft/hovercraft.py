unitsSold = int(input())

sellPrice = 3_000_000
costPrice = 2_000_000
insurancePrice = 1_000_000

unitsBuilt = 10
expenses = (unitsBuilt * costPrice) + insurancePrice
benefit = unitsSold * sellPrice

if benefit > expenses:
	print("Profit")
elif benefit < expenses:
	print("Loss")
else:
	print("Broke Even")
