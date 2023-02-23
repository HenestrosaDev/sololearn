houses = 0

until houses >= 3
	houses = gets.chomp.to_i
end

billProbability = (100.0 / houses * 2).ceil
puts billProbability
