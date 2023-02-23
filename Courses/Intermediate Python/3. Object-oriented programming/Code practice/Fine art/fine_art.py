def main():
	w = int(input())
	h = int(input())

	r = Rectangle(w, h)
	print(r.area())
	print(r.perimeter())

class Shape:
	def __init__(self, w, h):
		self.width = w
		self.height = h

	def area(self):
		return self.width * self.height

class Rectangle(Shape):
	def perimeter(self):
		return 2 * (self.width + self.height)

main()
