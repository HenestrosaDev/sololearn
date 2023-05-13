def main
  even_numbers_list = gets.split().select { |number_str| number_str.to_i.even? }
  even_numbers_str = even_numbers_list.join(" ")
  puts even_numbers_str
end

if __FILE__ == $0
  main
end
