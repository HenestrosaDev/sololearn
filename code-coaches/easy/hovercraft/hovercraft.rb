def hovercraft_profit_status(units_sold)
  sell_price = 3_000_000
  cost_price = 2_000_000
  insurance_price = 1_000_000

  units_built = 10
  expenses = (units_built * cost_price) + insurance_price
  revenue = units_sold * sell_price

  if revenue > expenses
    return "Profit"
  elsif revenue < expenses
    return "Loss"
  else
    return "Broke Even"
  end
end

def main
  units_sold = gets.chomp.to_i
  puts hovercraft_profit_status(units_sold)
end

if __FILE__ == $0
  main
end