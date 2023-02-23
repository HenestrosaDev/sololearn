chars = gets.chomp.split("")
previousChar = ""
isRepeated = false

chars.each do |c|
	if c == previousChar 
		print("Deja Vu")
		isRepeated = true
		break
	else
		previousChar = c
	end
end

if !isRepeated
	print("Unique")
end
