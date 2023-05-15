def contains_name_buddy(names, my_name)
  names.any? { |name| name[0] == my_name[0] }
end

def main
  names = gets.chomp.split
  my_name = gets.chomp

  if contains_name_buddy(names, my_name)
    puts "Compare notes"
  else
    puts "No such luck"
  end
end

if __FILE__ == $0
  main
end
