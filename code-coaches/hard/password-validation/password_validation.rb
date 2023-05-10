def is_password_strong(password)
    # Check if the password has at least 2 numbers, 2 special characters, and a length of at least 7 characters
    num_digits = password.count("0-9")
    num_special_chars = password.count("!@#$%&*")
    is_strong = num_digits >= 2 && num_special_chars >= 2 && password.length >= 7
    return is_strong
end


def main
    password = gets.chomp

    if is_password_strong(password)
        puts "Strong"
    else
        puts "Weak"
    end
end


if __FILE__ == $0
    main
end