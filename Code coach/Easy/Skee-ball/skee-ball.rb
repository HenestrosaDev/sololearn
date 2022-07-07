score = gets.to_i
squirtGunPrice = gets.to_i

ratio = 12  # 12 points = 1 ticket
tickets = score / ratio

if tickets >= squirtGunPrice
	puts "Buy it!"
else
	puts"Try again"
end
