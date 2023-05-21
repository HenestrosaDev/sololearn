def calculate_word_rank(word)
  permutations = word.chars.permutation(word.length).map(&:join).uniq
  sorted_permutations = permutations.sort
  rank = sorted_permutations.index(word) + 1
  rank
end

def main
  word = gets.chomp
  puts calculate_word_rank(word)
end

if __FILE__ == $0
  main
end
