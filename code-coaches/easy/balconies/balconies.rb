def calculate_area(balcony)
  dimensions = balcony.split(",")
  length = dimensions[0].to_i
  width = dimensions[1].to_i
  area = length * width
end

def main
  balcony_a = gets.chomp
  balcony_b = gets.chomp

  area_a = calculate_area(balcony_a)
  area_b = calculate_area(balcony_b)

  if area_a > area_b
    puts 'Apartment A'
  else
    puts 'Apartment B'
  end
end

if __FILE__ == $0
  main()¡¡
end
