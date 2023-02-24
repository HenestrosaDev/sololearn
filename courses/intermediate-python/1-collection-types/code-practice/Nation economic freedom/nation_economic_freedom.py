data = {
	'Singapore': 1,
	'Ireland': 6,
	'United Kingdom': 7,
	'Germany': 27,
	'Armenia': 34,
	'United States': 17,
	'Canada': 9,
	'Italy': 74
}

country = input()

if country in data:
	print(data.get(country))
else:
	print("Not found")
