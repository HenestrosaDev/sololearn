def get_savings(prices)
  # We pay full price for the most expensive item, so we remove it from the list
  prices.delete(prices.max)

  discount = 0.3
  savings_pre_tax = prices.sum { |price| price * discount }

  tax = 1.07
  savings_post_tax = savings_pre_tax * tax
  savings_post_tax.floor
end

def main
  prices = gets.chomp.split(",").map(&:to_f)
  puts get_savings(prices)
end

if __FILE__ == $0
  main
end
