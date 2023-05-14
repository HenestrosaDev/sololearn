def get_initials(name)
  name_split = name.split
  "#{name_split[0][0]}#{name_split[1][0]}"
end

def main
  num_names = gets.to_i
  names = (1..num_names).map { get_initials(gets.chomp) }
  puts names.join(" ")
end

if __FILE__ == $0
  main
end