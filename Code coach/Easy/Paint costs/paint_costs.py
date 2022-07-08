import math

colorsNumber = int(input())
basePrice = 40.0
paintPrice = 5.0
taxPercent = 10

subtotal = basePrice + (paintPrice * colorsNumber)
total = math.ceil((subtotal / taxPercent) + subtotal)

print(total)
