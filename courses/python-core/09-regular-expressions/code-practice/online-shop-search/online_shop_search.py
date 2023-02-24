import re

pattern = r'^[A-Z]{2}[0-9]{2}$'
product_id = input()

if re.match(pattern, product_id):
	print('Searching')
else:
	print('Wrong format')
