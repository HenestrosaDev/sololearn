require 'bigdecimal'

def lower_currency_after_conversion(ars, usd)
    ars_to_usd_rate = BigDecimal('0.02')
    converted_usd = ars * ars_to_usd_rate

    if converted_usd < usd
        return "Pesos"
    else
        return "Dollars"
    end
end


def main
    ars = BigDecimal(gets.chomp) # Argentine peso
    usd = BigDecimal(gets.chomp)  # US dollar

    puts lower_currency_after_conversion(ars, usd)
end


if __FILE__ == $0
    main
end