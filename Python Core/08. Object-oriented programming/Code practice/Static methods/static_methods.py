class Calculator:
	@staticmethod
	def add(*args):
		return sum(args)

n1 = int(input())
n2 = int(input())

print(Calculator.add(n1, n2))
