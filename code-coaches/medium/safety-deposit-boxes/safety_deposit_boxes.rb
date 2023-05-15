def calculate_time_to_get_item(items, item_to_find)
  time = 5
  items.each do |item|
    if item != item_to_find
      time += 5
    else
      break
    end
  end

  time
end

def main
  items = gets.chomp.split(",")
  item_to_find = gets.chomp
  puts calculate_time_to_get_item(items, item_to_find)
end

if __FILE__ == $0
  main
end
