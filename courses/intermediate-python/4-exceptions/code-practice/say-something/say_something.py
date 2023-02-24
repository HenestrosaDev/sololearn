tweet = input()

try:
	if (len(tweet) > 42):
		raise ValueError
except:
	print("Error")
else:
	print("Posted")
