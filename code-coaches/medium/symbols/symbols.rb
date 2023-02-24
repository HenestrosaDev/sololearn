encodedChars = gets.chomp.split('')
decoded = ""

encodedChars.each do |char|
	if char.match(/^[[:alnum:]]$/) || char.match(/^[[:space:]]$/)
		decoded += char
	end
end

puts decoded