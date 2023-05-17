def get_longest_common_substring(words)
  shortest_word = words.min_by(&:length)
  max_length = shortest_word.length
  longest_substring = ""

  (0...max_length).each do |start|
    (start + 1..max_length).each do |end_pos|
      substring = shortest_word[start...end_pos]
      if words.all? { |word| word.include?(substring) }
        if substring.length > longest_substring.length ||
           (substring.length == longest_substring.length && substring < longest_substring)
          longest_substring = substring
        end
      end
    end
  end

  longest_substring
end

def main
  words = gets.chomp.split
  puts get_longest_common_substring(words)
end

if __FILE__ == $0
  main
end
