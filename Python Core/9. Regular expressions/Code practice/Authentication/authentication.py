import re

def create_password(password):
  pattern = r"(?=.*[A-Z])(?=.*[0-9])"

  if re.match(pattern, password):
    return "Password created"
  else:
    return "Wrong format"


password = input()
print(create_password(password))
