import numpy as np

data = np.array([1000, 2500, 1400, 1800, 900, 4200, 2200, 1900, 3500])

new_house = int(input())
houses = np.append(data, new_house)
houses = np.sort(houses)

print(houses)
