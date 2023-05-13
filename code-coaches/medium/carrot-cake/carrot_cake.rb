def make_carrot_cake(num_carrots, num_boxes)
  num_carrots_leftover = num_carrots % num_boxes
  num_carrots_to_make_a_cake = 7

  if num_carrots_leftover >= num_carrots_to_make_a_cake
    return "Cake Time"
  else
    num_additional_carrots_need = num_carrots_to_make_a_cake - num_carrots_leftover
    return "I need to buy #{num_additional_carrots_need} more"
  end
end

def main
  num_carrots = gets.chomp.to_i
  num_boxes = gets.chomp.to_i
  puts make_carrot_cake(num_carrots, num_boxes)
end

if __FILE__ == $0
  main
end
