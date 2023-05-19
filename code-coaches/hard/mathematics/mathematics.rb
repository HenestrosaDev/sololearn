def find_matching_expression(answer, expressions)
  expressions.each_with_index do |expression, i|
    result = eval(expression)
    return i if result == answer
  end
  return nil
end

def main
  answer = gets.chomp.to_i
  expressions = gets.chomp.split

  index = find_matching_expression(answer, expressions)
  if index
    puts "index #{index}"
  else
    puts "none"
  end
end

if __FILE__ == $0
  main
end
