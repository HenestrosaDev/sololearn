def can_buy_squirt_gun(score, squirt_gun_price)
    ratio = 12  # 12 points = 1 ticket
    tickets = score / ratio

    if tickets >= squirt_gun_price
        puts "Buy it!"
    else
        puts"Try again"
    end
end


def main()
    score = gets.chomp.to_i
    squirt_gun_price = gets.chomp.to_i
    puts can_buy_squirt_gun(score, squirt_gun_price)
end


if __FILE__ == $0
    main
end