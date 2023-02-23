words = gets.chomp.split(/\W+/)

words.each do |w|
	charArray = w.chars
	charArray.append(charArray[0], "ay")
	charArray = charArray.drop(1)
	finalWord = charArray.join("")
	print "#{finalWord} "
end
