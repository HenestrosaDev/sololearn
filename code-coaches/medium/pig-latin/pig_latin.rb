def to_pig_latin(sentence)
  words = sentence.split(" ")
  pig_latin_words = words.map do |word|
    first_letter = word[0]
    rest_of_word = word[1..-1]
    "#{rest_of_word}#{first_letter}ay"
  end

  return pig_latin_words.join(" ")
end

def main
  sentence = gets.chomp
  puts to_pig_latin(sentence)
end

if __FILE__ == $0
  main
end