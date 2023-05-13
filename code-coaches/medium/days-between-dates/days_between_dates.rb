require 'date'

def get_num_days_between(from_str, to_str)
  date_format = "%B %d, %Y"

  from_date = Date.strptime(from_str, date_format)
  to_date = Date.strptime(to_str, date_format)

  delta = (to_date - from_date).to_i
  return delta
end

def main
  from_str = gets.chomp
  to_str = gets.chomp
  puts get_num_days_between(from_str, to_str)
end

if __FILE__ == $0
  main
end