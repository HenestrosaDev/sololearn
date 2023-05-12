def distribute_popsicles(popsicles, siblings)
  if (popsicles % siblings == 0)
    return "give away"
  else
    return "eat them yourself"
  end
end

def main
  siblings = 0

  until siblings != 0
    siblings = gets.chomp.to_i
  end

  popsicles = gets.chomp.to_i

  puts distribute_popsicles(popsicles, siblings)
end

if __FILE__ == $0
  main
end