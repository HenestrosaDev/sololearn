def sum_even_numbers(numbers)
  numbers.select { |num| num.even? }.sum
end

def main
  numbers_num = gets.to_i
  numbers = []
  numbers_num.times { numbers << gets.to_i }

  puts sum_even_numbers(numbers)
end

if __FILE__ == $0
  main
end