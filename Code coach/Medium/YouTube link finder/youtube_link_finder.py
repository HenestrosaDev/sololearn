import re

link = input()
idArray = re.findall(r'[\/=][\w-]{11}', link)
# we take the first match because the id goes before any parameter. 
# [1:] removes the first character of the string, which is / or =
id = ''.join(idArray[0])[1:]
print(id)
