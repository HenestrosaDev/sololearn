def q_sequence(n)
  return 1 if n <= 2

  q_sequence(n - q_sequence(n - 1)) + q_sequence(n - q_sequence(n - 2))
end

def main
  n = gets.chomp.to_i
  puts q_sequence(n)
end

if __FILE__ == $0
  main
end