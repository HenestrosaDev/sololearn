def get_pi_decimal_at(index)
  pi_decimals = "14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270938521105559644622948954930381964428"
  decimal = pi_decimals[index]
  decimal
end

def main
  # - 1 to convert the index to 0-based index
  index = gets.chomp.to_i - 1
  puts get_pi_decimal_at(index)
end

if __FILE__ == $0
  main
end