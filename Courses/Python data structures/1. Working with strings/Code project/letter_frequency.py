text = input()
ch = input()
frequency = int((text.count(ch) / len(text)) * 100)
print(frequency)
