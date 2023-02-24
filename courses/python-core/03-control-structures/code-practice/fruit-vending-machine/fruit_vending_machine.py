fruits = [
	"apple",
	"cherry",
	"banana",
	"kiwi",
	"lemon",
	"pear",
	"peach",
	"avocado"
]

num = int(input())

if num in range(0, len(fruits)):
	print(fruits[num])
else:
	print('Wrong number')
