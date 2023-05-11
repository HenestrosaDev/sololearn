def get_total(num_kaleidoscopes)
  price = 5
  tax = 1.07

  if num_kaleidoscopes > 1
    discount = 0.9
    subtotal = num_kaleidoscopes * price * discount
  else
    subtotal = price
  end

  total = subtotal * tax
  total.round(2)
end

def main
  num_kaleidoscopes = gets.chomp.to_i
  puts get_total(num_kaleidoscopes)
end

if __FILE__ == $0
  main()
end
