def main
  total_eggs = gets.chomp.to_i
  eggs_found_by_me = gets.chomp.to_i
  eggs_found_by_friend = gets.chomp.to_i
  eggs_found = eggs_found_by_me + eggs_found_by_friend

  if eggs_found == total_eggs
    puts "Candy Time"
  else
    puts "Keep Hunting"
  end
end

if __FILE__ == $0
  main
end