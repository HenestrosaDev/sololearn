try:
	name = input()
	if (len(name) < 4):
		raise TypeError
except:
	print("Invalid Name")
else:
	print("Account Created")
