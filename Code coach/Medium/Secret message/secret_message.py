def backWardChar(char):
  if char.isalpha():
    asciiLowA = 97
    asciiLowZ = 122
    return chr(asciiLowZ - ord(char.lower()) + asciiLowA)
  return char

text = input()
textInvertedAscii = ''.join(map(backWardChar, text))

print(textInvertedAscii)
