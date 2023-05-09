def replace_numbers_with_words(sentence)
    number_words = ["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"]

    words = sentence.split
    updated_words = words.map do |word|
        if word.to_i.to_s == word && word.to_i <= 10
            number_words[word.to_i]
        else
            word
        end
    end

    updated_words.join(" ")
end


def main
    sentence = gets.chomp
    puts replace_numbers_with_words(sentence)
end


if __FILE__ == $0
    main
end