def main
  yard_length = gets.chomp.to_i
  yard_width = gets.chomp.to_i
  flamingos_to_purchase = yard_length + yard_width
  puts flamingos_to_purchase
end

if __FILE__ == $0
  main
end
