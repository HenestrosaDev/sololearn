def main()
  num_friends = gets.chomp.to_i
  candles_per_person = 9
  # + candles_per_person because we order 9 candles, independently of the number of friends
  candles = num_friends * candles_per_person + candles_per_person
  puts candles
end


if __FILE__ == $0
  main
end