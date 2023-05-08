def convert_from_12h_to_24h(time_12h)
    time, indicator = time_12h.split
    hour, minute = time.split(':').map(&:to_i)

    if indicator == 'PM' && hour != 12
        hour += 12
    elsif indicator == 'AM' && hour == 12
        hour = 0
    end

    format('%02d:%02d', hour, minute)
end


def main
    time_12h = gets.chomp
    puts convert_from_12h_to_24h(time_12h)
end


if __FILE__ == $0
    main
end