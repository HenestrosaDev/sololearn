def get_snack_points(snacks)
  snacks_dict = {
    "Mango" => 9,
    "Lettuce" => 5,
    "Carrot" => 4,
    "Cheeseburger" => 0,
  }
  points = snacks.sum { |item| snacks_dict[item] || 0 }
end

def main
  snacks = gets.chomp.split()

  if get_snack_points(snacks) >= 10
    puts "Come on Down!"
  else
    puts "Time to wait"
  end
end

if __FILE__ == $0
    main
end
