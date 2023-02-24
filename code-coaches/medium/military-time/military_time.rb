time = gets.chomp
dayPeriod = ""

matchedDayPeriod = time.scan(/\s[a-zA-Z]{2}/)[0]
if (matchedDayPeriod)
	time.slice! matchedDayPeriod
	dayPeriod = matchedDayPeriod.strip.upcase
end

timeSplitted = time.split(":", -1)
hours = timeSplitted[0]
minutes = timeSplitted [1]

if (hours.length == 1)
	hours = "0#{hours}"
	# alternative: hours = "0%s" % [hours]
end

if dayPeriod == "PM"
	hours = hours.to_i + 12
elsif dayPeriod != "AM"
	if hours.to_i > 12
		hours = hours.to_i - 12
		minutes += " PM"
	else
		minutes += " AM"
	end
end

puts "#{hours}:#{minutes}"
