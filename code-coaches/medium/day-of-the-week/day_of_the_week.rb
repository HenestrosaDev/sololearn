require 'date'

def get_day_of_week(date_string)
  begin
    date = Date.strptime(date_string, '%m/%d/%Y')
  rescue ArgumentError
    date = Date.strptime(date_string, '%B %d, %Y')
  end
  date.strftime('%A')
end

def main
  date_string = gets.chomp
  puts get_day_of_week(date_string)
end

if __FILE__ == $0
  main
end
