def get_waiting_time(num_people_ahead)
  trip_duration = 10
  boat_capacity = 20

  # add 1 to account for yourself
  num_boats_needed = ((num_people_ahead + 1) / boat_capacity.to_f).ceil

  # trip_duration * 2 because of round trip
  # num_boats_needed - 1 to not include our boat
  waiting_time = (num_boats_needed - 1) * trip_duration * 2

  total_waiting_time = waiting_time + trip_duration
end

def main()
  num_people_ahead = gets.chomp.to_i
  puts get_waiting_time(num_people_ahead)
end

if __FILE__ == $0
  main()
end
