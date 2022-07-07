encodedChars = gets.chomp.split('')
decoded = ""

encodedChars.each do |char|
	if char.match(/^[[:alpha:]]$/) || char.match(/^[[:space:]]$/)
		decoded += char
	end
end

puts decoded.reverse! # '!' modifies 'decoded'