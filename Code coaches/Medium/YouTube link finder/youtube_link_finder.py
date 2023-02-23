import re

link = input()
id_array = re.findall(r'[\/=][\w-]{11}', link)
# we take the first match because the id goes before any parameter. 
# [1:] removes the first character of the string, which is / or =
video_id = ''.join(id_array[0])[1:]
print(video_id)
