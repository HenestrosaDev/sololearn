$month_to_num = {
  "January" => "1",
  "February" => "2",
  "March" => "3",
  "April" => "4",
  "May" => "5",
  "June" => "6",
  "July" => "7",
  "August" => "8",
  "September" => "9",
  "October" => "10",
  "November" => "11",
  "December" => "12",
}

def get_eu_date(us_date)
  if us_date.include? "/"
    us_date_split = us_date.split("/")
    eu_date = "#{us_date_split[1]}/#{us_date_split[0]}/#{us_date_split[2]}"
  else
    us_date_split = us_date.split(" ")
    month = $month_to_num[us_date_split[0]]
    day = us_date_split[1].delete_suffix!(",")
    eu_date = "#{day}/#{month}/#{us_date_split[2]}"
  end
end

def main
  us_date = gets.chomp
  puts get_eu_date(us_date)
end

if __FILE__ == $0
  main
end