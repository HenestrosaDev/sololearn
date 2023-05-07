def get_total_paint_costs(num_colors)
    basePrice = 40.0
    paintPrice = 5.0
    taxPercent = 10

    subtotal = basePrice + (paintPrice * num_colors)
    total = ((subtotal / taxPercent) + subtotal).ceil

    return total
end


def main
    num_colors = gets.chomp.to_i
    puts get_total_paint_costs(num_colors)
end


if __FILE__ == $0
    main
end
