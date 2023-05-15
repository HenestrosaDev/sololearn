def split_string(word, num_parts, separator = "-")
  parts = word.scan(/.{1,#{num_parts}}/)
  parts.join(separator)
end

def main
  word = gets.chomp
  num_parts = gets.chomp.to_i
  puts split_string(word, num_parts)
end

if __FILE__ == $0
  main
end