def does_pass_luhn_algorithm(cc_num)
  # Step 1: Reverse the credit card number
  reversed_cc_num = cc_num.reverse

  total_sum = 0
  reversed_cc_num.chars.each_with_index do |char, index|
    digit = char.to_i
    # Step 2: Multiply every second digit by 2
    if index.odd?
      digit *= 2
      # Step 3: Subtract 9 from all numbers higher than 9
      digit -= 9 if digit > 9
    end

    # Step 4: Add all the digits together
    total_sum += digit
  end

  # Step 5: Modulo 10 of that sum should be equal to 0
  total_sum % 10 == 0
end

def validate_credit_card_number(cc_num)
  cc_num.length == 16 && does_pass_luhn_algorithm(cc_num)
end

def main
  cc_num = gets.chomp
  if validate_credit_card_number(cc_num)
    puts "valid"
  else
    puts "not valid"
  end
end

if __FILE__ == $0
  main
end
