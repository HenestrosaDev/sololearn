salaries = [2000, 1800, 3100, 4400, 1500]
bonus = int(input())
result = list(map(lambda x: x + bonus, salaries))

print(result)
