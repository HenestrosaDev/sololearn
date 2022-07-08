diagram = gets.chomp
diagramSplitted = diagram.upcase!.split("$")

isThiefOnLeft = true
thiefPos = nil
guardPos = nil

diagramSplitted.each_with_index do |part, idx1|
	if part.include? "T"
		part.each_char.with_index do |c, idx2|
			if c == 'G'
				if !isThiefOnLeft && guardPos
					next
				else
					guardPos = idx2
				end
			elsif c == 'T'
				thiefPos = idx2
			end
		end
	elsif idx1 == 0
		isThiefOnLeft = false
		next
	end
end

isLeftRobbed = (!guardPos || guardPos < thiefPos) && isThiefOnLeft
isRightRobbed = (!guardPos || guardPos > thiefPos) && !isThiefOnLeft

if isLeftRobbed || isRightRobbed
	puts "ALARM"
else
	puts "quiet"
end
