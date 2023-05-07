def is_backup_needed(criminals)
    if criminals < 5
        return "I got this!"
    elsif criminals.between?(5,10)
        return "Help me Batman"
    elsif criminals > 10
        return "Good Luck out there!"
    end
end


def main
    criminals = gets.chomp.to_i
    puts is_backup_needed(criminals)
end


if __FILE__ == $0
  main
end

