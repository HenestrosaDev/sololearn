words = gets.chomp.split(" ")
wordsNumber = 0
totalLength = 0

words.each do |word|
	wordsNumber += 1
	word.each_char do |char|
		if char.match(/^[[:alpha:]]$/)
			totalLength += 1
		end
	end
end

averageLength = (totalLength.to_f / wordsNumber.to_f).ceil
puts averageLength
