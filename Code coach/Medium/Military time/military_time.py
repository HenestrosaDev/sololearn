import re

time = input()
day_period = ""

# position 0 because we know that it will be the first occurrence
matched_day_period = re.findall(r"\s[a-zA-Z]{2}", time)[0]
if matched_day_period:
	time = re.sub(matched_day_period, '', time) 
	day_period = matched_day_period.strip().upper()  # filtered

time_splitted = time.split(":")
hours = time_splitted[0]
minutes = time_splitted[1]

if len(hours) == 1:
	hours = "0{0}".format(hours)

if day_period == "PM":
	hours = int(hours) + 12
elif day_period != "AM":
	if int(hours) > 12:
		hours = int(hours) - 12
		minutes += " PM"
	else:
		minutes += " AM"

print(f"{hours}:{minutes}")
