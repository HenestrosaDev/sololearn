def main():
	start = int(input())
	end = int(input())
	print(list(primeGenerator(start, end)))

def isPrime(x) -> bool:
	if x < 2:
		return False
	elif x == 2:
		return True
	for n in range(2, x):
		if x % n == 0:
			return False

	return True

def primeGenerator(start, end):
	for x in range(start, end):
		if isPrime(x):
			yield x

main()
