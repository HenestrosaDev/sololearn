class Juice:
	def __init__(self, name, capacity):
		self.name = name
		self.capacity = capacity

	def __str__(self):
		return (f'{self.name} ({str(self.capacity)}L)')

	def __add__(self, other):
		return Juice(
			f'{self.name}&{other.name}', 
			self.capacity + other.capacity
		)

apple = Juice('Apple', 2.0)
orange = Juice('Orange', 1.5)

mix = apple + orange
print(mix)
