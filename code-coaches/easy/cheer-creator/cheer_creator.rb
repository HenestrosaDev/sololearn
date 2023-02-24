yards = gets.chomp.to_i

if yards > 10
	puts "High Five"
elsif yards < 1
	puts "shh"
else
	for x in 1..yards do
		print "Ra!"
	end
end