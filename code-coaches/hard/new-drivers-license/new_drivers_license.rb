def get_waiting_time(my_name, num_agents, customers)
  time_for_license = 20
  position_in_queue = (customers.index(my_name) + 1).to_f / num_agents
  waiting_time = (position_in_queue.ceil) * time_for_license
end

def main
  my_name = gets.chomp
  num_agents = gets.to_i
  customers = gets.chomp.split

  customers << my_name
  customers.sort!
  puts get_waiting_time(my_name, num_agents, customers)
end

if __FILE__ == $0
  main
end
