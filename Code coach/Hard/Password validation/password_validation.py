import re

password = input()
regex = r"(?=.*[A-Za-z])(?=(.*\d){2,})(?=(.*[@$!%*#?&]){2,})[A-Za-z\d@$!%*#?&]{8,}"

if re.match(regex, password):
  print("Strong")
else:
  print("Weak")
