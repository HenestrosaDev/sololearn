def get_missing_numbers_in_sequence(nums)
  (nums.min...nums.max).select { |num| !nums.include?(num) }
end

def main
  list_length = gets.chomp.to_i
  nums = []
  list_length.times { nums << gets.chomp.to_i }
  missing_numbers_str = get_missing_numbers_in_sequence(nums).join(' ')
  puts missing_numbers_str
end

if __FILE__ == $0
  main
end
