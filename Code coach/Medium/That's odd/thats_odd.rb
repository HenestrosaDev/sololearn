length = gets.chomp.to_i
numbers = []

(0...length).each do |i|
	number = gets.chomp.to_i
	if (number % 2 == 0)
		numbers.append(number)
	end
end

puts numbers.sum
