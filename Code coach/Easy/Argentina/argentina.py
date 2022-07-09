from decimal import Decimal

ars = Decimal(input()) # Argentine peso
usd = Decimal(input())  # US dollar

arsToUsd = Decimal('0.02')  # exchange rate
convertedUsd = ars * arsToUsd

if convertedUsd > usd:
	print("Dollars")
else:
	print("Pesos")
