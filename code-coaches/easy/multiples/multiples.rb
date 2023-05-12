def sum_multiples(num, *multiples)
  sum_of_multiples = (0...num).select { |x| multiples.any? { |m| x % m == 0 } }.sum
  return sum_of_multiples
end

def main()
  num = gets.chomp.to_i
  puts sum_multiples(num, 3, 5)
end

if __FILE__ == $0
  main()
end
