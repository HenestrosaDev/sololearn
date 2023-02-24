def calc(x):
	perimeter = x * 4
	area = x * x
	return (perimeter, area)

side = int(input())
p, a = calc(side)

print("Perimeter: " + str(p))
print("Area: " + str(a))
