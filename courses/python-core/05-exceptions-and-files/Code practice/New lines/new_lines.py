names = ["John", "Oscar", "Jacob"]

with open("names.txt", "w+") as f:
	f.write('\n'.join(names))

with open("names.txt", "r") as f:
	print(f.read())
