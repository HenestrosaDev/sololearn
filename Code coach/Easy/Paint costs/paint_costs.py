import math

colors_number = int(input())
base_price = 40.0
paint_price = 5.0
tax_percent = 10

subtotal = base_price + (paint_price * colors_number)
total = math.ceil((subtotal / tax_percent) + subtotal)

print(total)
