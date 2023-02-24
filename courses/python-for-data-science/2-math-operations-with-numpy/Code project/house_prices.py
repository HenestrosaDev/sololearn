import numpy as np

houses = np.array([150000, 125000, 320000, 540000, 200000, 120000, 160000, 230000, 280000, 290000, 300000, 500000, 420000, 100000, 150000, 280000])

mean = np.mean(houses)
std = np.std(houses)

houses_within_one_std = np.array(houses[(houses >= mean - std) & (houses <= mean + std)])
perc_houses_within_one_std = (houses_within_one_std.size / houses.size) * 100
print(perc_houses_within_one_std)
