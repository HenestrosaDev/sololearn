class Student:
	def __init__(self, name):
		self.name = name

	def greet(self):
		print(f'{self.name} says hi')

obj = Student("John")
obj.greet()
