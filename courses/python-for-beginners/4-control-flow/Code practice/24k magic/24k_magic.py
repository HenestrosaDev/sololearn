purity = float(input())

if 75 <= purity < 83.3:
	print("18K")
elif 83.3 <= purity < 91.7:
	print("20K")
elif 91.7 <= purity < 99.9:
	print("22K")
elif purity >= 99.9:
	print("24K")
