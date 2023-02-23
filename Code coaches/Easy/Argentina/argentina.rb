ars = BigDecimal(gets.chomp) # Argentine peso
usd = BigDecimal(gets.chomp)  # US dollar

arsToUsd = BigDecimal('0.02') # exchange rate
convertedUsd = ars * arsToUsd

if convertedUsd > usd
	puts "Dollars"
else
	puts "Pesos"
end