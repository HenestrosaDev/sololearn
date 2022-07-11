def backWard_char(char):
  if char.isalpha():
    ascii_low_a = 97
    ascii_low_z = 122
    return chr(ascii_low_z - ord(char.lower()) + ascii_low_a)
  return char

text = input()
text_inverted_ascii = ''.join(map(backWard_char, text))

print(text_inverted_ascii)
