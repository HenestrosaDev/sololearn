import re

time = input()
dayPeriod = ""

# position 0 because we know that it will be the first occurrence
matchedDayPeriod = re.findall(r"\s[a-zA-Z]{2}", time)[0]
if matchedDayPeriod:
	time = re.sub(matchedDayPeriod, '', time) 
	dayPeriod = matchedDayPeriod.strip().upper()  # filtered

timeSplitted = time.split(":")
hours = timeSplitted[0]
minutes = timeSplitted[1]

if len(hours) == 1:
	hours = "0{0}".format(hours)

if dayPeriod == "PM":
	hours = int(hours) + 12
elif dayPeriod != "AM":
	if int(hours) > 12:
		hours = int(hours) - 12
		minutes += " PM"
	else:
		minutes += " AM"

print(f"{hours}:{minutes}")
