def are_numbers_consecutive(lst)
  lst.sort == (lst.min..lst.max).to_a
end

def get_duplicates(lst)
  counter = Hash.new(0)
  lst.each { |item| counter[item] += 1 }
  counter.select { |_key, value| value > 1 }.to_a
end

def evaluate_poker_hand(cards)
  deck_cards_value_sorted = %w[A 2 3 4 5 6 7 8 9 10 J K Q]
  values = cards.map { |card| card.chop }
  suites = cards.map { |card| card[-1] }

  duplicate_values = get_duplicates(values)
  duplicate_suites = get_duplicates(suites)

  if duplicate_values.empty?
    values_indexes = values.map { |value| deck_cards_value_sorted.index(value) if deck_cards_value_sorted.include?(value) }.compact

    if duplicate_suites.any? && duplicate_suites[0][1] == 5
      return "Royal Flush" if %w[10 J Q K A].to_set == values.to_set
      return "Straight Flush" if are_numbers_consecutive(values_indexes)
      return "Flush"
    elsif are_numbers_consecutive(values_indexes)
      return "Straight"
    end
  else
    num_cards_same_value = duplicate_values.map { |_value, count| count }

    return "Full House" if num_cards_same_value.include?(3) && num_cards_same_value.include?(2)
    return "Four of a Kind" if num_cards_same_value.include?(4)
    return "Three of a Kind" if num_cards_same_value.include?(3)
    return "Two Pairs" if num_cards_same_value.count(2) == 2
    return "One Pair" if num_cards_same_value.count(2) == 1
  end

  "High Card"
end

def main
  cards = gets.chomp.split
  puts evaluate_poker_hand(cards)
end

if __FILE__ == $0
  main
end
