import re

phone = input()
fixed_phone = re.sub(r'^00', '+', phone, count=0)
print(fixed_phone)
