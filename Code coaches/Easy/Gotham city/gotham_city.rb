criminals = gets.chomp.to_i

if criminals < 5
	puts "I got this!"
elsif criminals.between?(5,10)
	puts "Help me Batman"
elsif criminals > 10 
	puts "Good Luck out there!"
end
