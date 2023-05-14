def does_sentence_flow(sentence)
  words = sentence.split
  (1...words.length).all? { |i| words[i][0] == words[i - 1][-1] }
end

def main
  sentence = gets.strip
  puts does_sentence_flow(sentence)
end

if __FILE__ == $0
  main
end
