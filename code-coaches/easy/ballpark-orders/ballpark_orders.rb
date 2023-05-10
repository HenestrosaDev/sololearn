def get_total_cost(order)
    menu = {
        "Pizza" => 6.0,
        "Nachos" => 6.0,
        "Cheeseburger" => 10.0,
        "Water" => 4.0,
        "Coke" => 5.0,
    }
    subtotal = order.inject(0) { |sum, item| sum + menu[item] ||= 5.0 }
    tax = 1.07
    total = subtotal * tax
    total.round(2)
end


def main()
    order = gets.chomp.split()
    puts get_total_cost(order)
end


if __FILE__ == $0
    main()
end
