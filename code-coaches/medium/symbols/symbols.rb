def remove_symbols(encoded)
  # symbols: a char that is not alphanumeric or a space
  encoded.gsub(/[^[:alnum:][:space:]]/, '')
end

def main
  encoded = gets.chomp
  puts remove_symbols(encoded)
end

if __FILE__ == $0
  main
end