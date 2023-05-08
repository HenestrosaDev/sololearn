def get_average_word_length(words)
    words_number = words.length()
    total_length = 0

    words.each do |word|
        word.each_char do |char|
            if char.match(/^[[:alpha:]]$/)
                total_length += 1
            end
        end
    end

    average_length = (total_length.to_f / words_number.to_f).ceil
    return average_length
end


def main
    words = gets.chomp.split(" ")
    puts get_average_word_length(words)
end


if __FILE__ == $0
    main
end