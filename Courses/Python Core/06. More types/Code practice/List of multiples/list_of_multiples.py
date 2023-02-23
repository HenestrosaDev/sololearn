x = int(input())

filtered_list = [y for y in range(x) if y % 5 == 0 and y % 3 == 0]
print(filtered_list)
