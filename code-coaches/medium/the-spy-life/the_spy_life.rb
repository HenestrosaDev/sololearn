def decode_message(message)
    message_without_symbols = message.chars.select { |char| char.match?(/\s|[[:alpha:]]/) }.join
    flipped_message_without_symbols = message_without_symbols.reverse
    return flipped_message_without_symbols
end


def main()
    encoded_message = gets.chomp
    puts decode_message(encoded_message)
end


if __FILE__ == $0
    main()
end
