def main():
	price = int(input())
	percentage = int(input())

	result = percentage_of_price(price, percentage)
	print(result)

def percentage_of_price(price, percentage): 
	return (price * percentage) / 100

main()
