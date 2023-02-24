yards = int(input())

if (yards > 10):
	print('High Five')
elif (yards < 1):
	print('shh')
else:
	for x in range(yards):
		print('Ra!', end='')
