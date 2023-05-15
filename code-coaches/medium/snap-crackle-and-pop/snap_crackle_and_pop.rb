def get_sound(num_rice_krispies)
  if num_rice_krispies % 3 == 0
    return "Pop"
  elsif num_rice_krispies % 2 != 0
    return "Snap"
  else
    return "Crackle"
  end
end

def main
  num_rice_krispies_list = Array.new(6) { gets.chomp.to_i }
  sounds = num_rice_krispies_list.map { |num| get_sound(num) }
  puts sounds.join(" ")
end

if __FILE__ == $0
  main
end
