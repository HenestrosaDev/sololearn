class Vehicle:
	def horn(self):
		print("Beep!")

class Car(Vehicle):
	def __init__(self, name, color):
		self.name = name
		self.color = color

obj = Car("BMW", "red")
obj.horn()
