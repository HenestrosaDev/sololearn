def backWardChar(char)
  if char.match(/^[[:alpha:]]$/)
    asciiLowA = 97
    asciiLowZ = 122
    return (asciiLowZ - char.downcase.ord + asciiLowA).chr
  end

  return char
end

# Can be improved
text = gets.chomp
textInvertedAscii = ""
text.each_char { |c| textInvertedAscii += backWardChar(c) }

puts textInvertedAscii