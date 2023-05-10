def is_money_safe(layout)
    # Find the indices of the money, thief, and guards on the casino floor
    money_index = layout.index("$")
    thief_index = layout.index("T")
    guard_indices = layout.chars.each_index.select { |i| layout[i] == "G" }

    # Check if there is a guard between the money and the thief
    return guard_indices.any? { |i| i > [money_index, thief_index].min && i < [money_index, thief_index].max }
end


def main
    layout = gets.chomp

    if is_money_safe(layout)
        puts "quiet"
    else
        puts "ALARM"
    end
end


if __FILE__ == $0
    main
end


# ALTERNATIVE VERSION:
#
# diagram = gets.chomp
# diagramSplitted = diagram.upcase!.split("$")
#
# isThiefOnLeft = true
# thiefPos = nil
# guardPos = nil
#
# diagramSplitted.each_with_index do |part, idx1|
# 	if part.include? "T"
# 		part.each_char.with_index do |c, idx2|
# 			if c == 'G'
# 				if !isThiefOnLeft && guardPos
# 					next
# 				else
# 					guardPos = idx2
# 				end
# 			elsif c == 'T'
# 				thiefPos = idx2
# 			end
# 		end
# 	elsif idx1 == 0
# 		isThiefOnLeft = false
# 		next
# 	end
# end
#
# isLeftRobbed = (!guardPos || guardPos < thiefPos) && isThiefOnLeft
# isRightRobbed = (!guardPos || guardPos > thiefPos) && !isThiefOnLeft
#
# if isLeftRobbed || isRightRobbed
# 	puts "ALARM"
# else
# 	puts "quiet"
# end
