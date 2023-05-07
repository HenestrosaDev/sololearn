def getCheer(yards)
    if yards > 10
        return "High Five"
    elsif yards < 1
        return "shh"
    else
        return "Ra!" * yards
    end
end


def main
    yards = gets.chomp.to_i
    puts getCheer(yards)
end


if __FILE__ == $0
  main
end
