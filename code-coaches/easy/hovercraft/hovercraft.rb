unitsSold = gets.chomp.to_i

sellPrice = 3_000_000
costPrice = 2_000_000
insurancePrice = 1_000_000

unitsBuilt = 10
expenses = (unitsBuilt * costPrice) + insurancePrice
benefit = unitsSold * sellPrice

if benefit > expenses
	puts "Profit"
elsif benefit < expenses
	puts "Loss"
else
	puts "Broke Even"
end