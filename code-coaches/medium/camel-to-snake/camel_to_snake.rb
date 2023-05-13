def to_snake_case(camel_case_string)
  snake_case_string = ""

  camel_case_string.each_char.with_index do |char, i|
    if i != 0
      previous_char = camel_case_string[i - 1]
      if char.upcase == char && previous_char =~ /[a-zA-Z]/ || char =~ /[a-zA-Z]/ && previous_char =~ /\d/
        snake_case_string += "_"
      end
    end

    snake_case_string += char.downcase
  end

  snake_case_string
end

def main
  camel_case_string = gets.chomp
  puts to_snake_case(camel_case_string)
end

if __FILE__ == $0
  main
end
