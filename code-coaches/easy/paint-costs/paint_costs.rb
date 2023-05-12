def get_total_paint_costs(num_colors)
  base_price = 40.0
  paint_price = 5.0
  tax_percent = 10

  subtotal = base_price + (paint_price * num_colors)
  total = ((subtotal / tax_percent) + subtotal).ceil

  total
end

def main
  num_colors = gets.chomp.to_i
  puts get_total_paint_costs(num_colors)
end

if __FILE__ == $0
  main
end
