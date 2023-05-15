def get_total(prices)
  tax = 1.07
  total = prices.sum { |price| price < 20 ? price * tax : price }
  total_rounded = (total * 100).round / 100.0
end

def main
  prices = gets.chomp.split(",").map(&:to_i)
  puts get_total(prices)
end

if __FILE__ == $0
  main
end
