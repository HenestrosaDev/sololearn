def reverse_char(char)
  if char.match?(/[a-zA-Z]/)
    ascii_lowercase_a = 97
    ascii_lowercase_z = 122
    return (ascii_lowercase_z - char.downcase.ord + ascii_lowercase_a).chr
  end

  char
end

def encode_message(message)
  message.chars.map { |char| reverse_char(char) }.join
end

def main
  message = gets.chomp
  puts encode_message(message)
end

if __FILE__ == $0
  main
end
