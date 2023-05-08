def get_apple_pies(fruit_count)
    apple_count = fruit_count / 2
    return apple_count / 3
end


def main
    fruit_count = gets.chomp.to_i
    puts get_apple_pies(fruit_count)
end


if __FILE__ == $0
  main
end
