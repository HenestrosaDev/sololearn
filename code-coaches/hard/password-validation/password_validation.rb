password = gets.chomp
regex = /(?=.*[A-Za-z])(?=(.*\d){2,})(?=(.*[@$!%*#?&]){2,})[A-Za-z\d@$!%*#?&]{8,}/

if password.match?(regex)
	puts "Strong"
else
	puts "Weak"
end
