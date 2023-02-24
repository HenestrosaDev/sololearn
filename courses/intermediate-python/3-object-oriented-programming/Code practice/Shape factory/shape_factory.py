def main():
	w1 = int(input())
	h1 = int(input())
	w2 = int(input())
	h2 = int(input())

	s1 = Shape(w1, h1)
	s2 = Shape(w2, h2)
	result = s1 + s2

	print(result.area())
	print(s1 > s2)

class Shape:
	def __init__(self, w, h):
		self.width = w
		self.height = h

	def area(self):
		return self.width*self.height

	def __gt__(self, other):
		return self.area() > other.area()

	def __add__(self, other):
		return Shape(self.width + other.width, self.height + other.height)

main()