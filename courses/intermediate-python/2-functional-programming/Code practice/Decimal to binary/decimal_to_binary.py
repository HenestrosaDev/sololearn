def main():
	decimal = int(input())
	binary = convert(decimal)
	print(binary)

def convert(num):
	if num == 0:
		return 0
	else:
		return (num % 2 + 10 * convert(num // 2))

main()