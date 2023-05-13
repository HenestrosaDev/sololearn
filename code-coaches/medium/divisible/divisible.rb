def is_divisible_by_all(num, dividers)
  dividers.each do |divider|
    return false if num % divider != 0
  end
  true
end

def main
  num = gets.chomp.to_i
  dividers = gets.chomp.split.map(&:to_i)

  if is_divisible_by_all(num, dividers)
    puts "divisible by all"
  else
    puts "not divisible by all"
  end
end

if __FILE__ == $0
  main
end
