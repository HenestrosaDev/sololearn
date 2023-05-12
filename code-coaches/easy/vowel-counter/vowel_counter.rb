def get_vowels_count(sentence)
  sentence.downcase.count("aeiou")
end

def main
  sentence = gets.chomp
  puts get_vowels_count(sentence)
end

if __FILE__ == $0
  main
end
