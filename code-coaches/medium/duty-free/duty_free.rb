def is_on_budget(items_price_eur)
  usd_eur_rate = 1.1
  limit_price_usd = 20

  items_price_eur.each do |item_price_eur|
    item_price_usd = item_price_eur * usd_eur_rate
    return false if item_price_usd > limit_price_usd
  end

  true
end

def main
  items_price_eur = gets.split.map(&:to_f)

  if is_on_budget(items_price_eur)
    puts "On to the terminal"
  else
    puts "Back to the store"
  end
end

if __FILE__ == $0
  main
end
