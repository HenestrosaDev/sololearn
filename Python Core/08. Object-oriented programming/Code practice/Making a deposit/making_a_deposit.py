class BankAccount:
	def __init__(self, balance):
		self._balance = balance

	def __repr__(self):
		return f'Account Balance: {self._balance}'

	def deposit(self, amount):
		self._balance += amount

acc = BankAccount(0)
acc.deposit(int(input()))
print(acc)
