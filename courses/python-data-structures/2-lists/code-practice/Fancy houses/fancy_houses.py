prices = [125000, 78000, 110000, 65000, 300000, 250000, 210000, 150000, 165000, 140000, 125000, 85000, 90000, 128000, 230000, 225000, 100000, 300000]

avg = sum(prices) / len(prices)
houses_above_avg = 0

for price in prices:
	if price > avg:
		houses_above_avg += 1

print(houses_above_avg)