def main
  num = gets.to_i
  num_bin = num.to_s(2)
  num_of_ones_in_bin = num_bin.count("1")
  puts num_of_ones_in_bin
end

if __FILE__ == $0
  main
end
