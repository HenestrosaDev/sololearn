def is_isogram(word)
  # uniq removes duplicate characters in the word
  # Then, checks if the length of the original word is equal to the length of the set
  word.downcase.chars.uniq.length == word.length
end

def main
  word = gets.chomp
  puts is_isogram(word)
end

if __FILE__ == $0
  main
end


# ALTERNATIVE METHOD:
# def is_isogram(word)
#   # Create a new array to store each letter in the word
#   letters = []
#
#   # Loop through each character in the word
#   word.each_char do |char|
#     # If the letter is already in the array, the word is not an isogram
#     if letters.include?(char)
#       return false
#     end
#
#     # Otherwise, add the letter to the array
#     letters << char
#   end
#
#   # If the loop completes without returning false, the word is an isogram
#   return true
# end