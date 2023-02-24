colorsNumber = gets.chomp.to_i
basePrice = 40.0
paintPrice = 5.0
taxPercent = 10

subtotal = basePrice + (paintPrice * colorsNumber)
total = ((subtotal / taxPercent) + subtotal).ceil

puts total
