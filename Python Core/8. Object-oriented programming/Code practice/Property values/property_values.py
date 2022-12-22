class Number:
	def __init__(self, value):
		self.value = value
		self.isEven = value % 2 == 0


x = Number(int(input()))
print(x.isEven)
