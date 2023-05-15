def is_each_number_greater_than_the_sum(nums)
  nums.each_with_index do |num, idx|
    return false if num < nums[0...idx].sum
  end
  true
end

def main
  nums_length = gets.chomp.to_i
  nums = []
  nums_length.times do
    nums << gets.chomp.to_i
  end

  puts is_each_number_greater_than_the_sum(nums)
end

if __FILE__ == $0
  main
end
