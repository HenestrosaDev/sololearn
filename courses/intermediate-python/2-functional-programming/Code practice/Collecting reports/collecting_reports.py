def decor(func):
	def wrap(num):
		print("***")
		func(num)
		print("***")
		print("END OF PAGE")
	return wrap

@decor
def invoice(num):
  print(f"INVOICE #{num}")

invoice(input())
