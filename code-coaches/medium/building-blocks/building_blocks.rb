def main
  num_students = 15
  num_blocks = (1..4).sum { gets.chomp.to_i }
  puts num_blocks % num_students
end

if __FILE__ == $0
  main
end
