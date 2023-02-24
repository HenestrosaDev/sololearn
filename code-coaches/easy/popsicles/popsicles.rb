siblings = 0

until siblings != 0
	siblings = gets.chomp.to_i
end

popsicles = gets.chomp.to_i

if (popsicles % siblings == 0)
	puts "give away"
else
	puts "eat them yourself"
end