def main():
	w = int(input())
	h = int(input())
	print(Shape.area(w, h))

class Shape():
	@staticmethod
	def area(width, height):
		return width * height

main()
