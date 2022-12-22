import re

phone = str(input())
pattern = r"^[189][0-9]{7}$"

if (re.match(pattern, phone)):
	print("Valid")
else:
	print("Invalid")
