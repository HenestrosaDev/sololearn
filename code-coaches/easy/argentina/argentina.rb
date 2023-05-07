require 'bigdecimal'

def lowerCurrencyAfterConversion(ars, usd)
    arsToUsdRate = BigDecimal('0.02')
    convertedUsd = ars * arsToUsdRate

    if convertedUsd < usd
        return "Pesos"
    else
        return "Dollars"
   end
end

def main
    ars = BigDecimal(gets.chomp) # Argentine peso
    usd = BigDecimal(gets.chomp)  # US dollar

    puts lowerCurrencyAfterConversion(ars, usd)
end

if __FILE__ == $0
  main
end