def main
    num_houses = 0

    until num_houses >= 3
        num_houses = gets.chomp.to_i
    end

    bill_probability = (100.0 / num_houses * 2).ceil

    puts bill_probability
end


if __FILE__ == $0
  main
end
