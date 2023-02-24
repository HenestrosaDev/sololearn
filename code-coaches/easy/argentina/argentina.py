from decimal import Decimal

ars = Decimal(input()) # Argentine peso
usd = Decimal(input())  # US dollar

ars_to_usd = Decimal('0.02')  # exchange rate
converted_usd = ars * ars_to_usd

if converted_usd > usd:
	print("Dollars")
else:
	print("Pesos")
