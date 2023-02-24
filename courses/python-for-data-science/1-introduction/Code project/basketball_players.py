import math

heights = [180, 172, 178, 185, 190, 195, 192, 200, 210, 190]

heights_sum = 0.0
for height in heights:
	heights_sum += height

mean = heights_sum / len(heights)

deviance = 0.0
for height in heights:
	deviance += (height - mean) ** 2

deviance /= len(heights)
sd = math.sqrt(deviance)

heights_within_one_std_dev = []
for height in heights:
	if (mean - sd) < height and (mean + sd) > height:
		heights_within_one_std_dev.append(height)

print(len(heights_within_one_std_dev))
