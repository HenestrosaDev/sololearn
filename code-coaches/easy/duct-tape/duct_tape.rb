def get_area(height, width)
  area = height * width
end

def to_inches(feet)
  inches = feet * 12
end

def get_duct_tapes_needed(height, width)
  # Everything is calculated in inches
  duct_tape_height = 720
  duct_tape_width = 2

  door_area_both_sides = get_area(height, width) * 2
  duct_tape_area = get_area(duct_tape_height, duct_tape_width)

  duct_tapes_needed = (door_area_both_sides.to_f / duct_tape_area).ceil
end

def main
  door_height = gets.chomp.to_i
  door_width = gets.chomp.to_i
  puts get_duct_tapes_needed(to_inches(door_height), to_inches(door_width))
end

if __FILE__ == $0
  main
end
