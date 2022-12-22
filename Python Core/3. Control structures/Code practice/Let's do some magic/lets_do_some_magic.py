items = int(input())
days = int(input())

# Another way to do it:
# for x in range(days):
#   items *= 2

while days > 0:
	items *= 2
	days -= 1

print(items)
