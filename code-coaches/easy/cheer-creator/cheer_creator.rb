def get_cheer(yards)
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
  puts get_cheer(yards)
end

if __FILE__ == $0
  main
end
