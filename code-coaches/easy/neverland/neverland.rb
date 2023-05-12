def main
  initial_age = gets.chomp.to_i
  years_passed = gets.chomp.to_i
  final_age = initial_age + years_passed
  puts "My twin is #{final_age} years old and they are #{years_passed} years older than me"
end

if __FILE__ == $0
  main
end
