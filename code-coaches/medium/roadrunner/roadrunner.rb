def is_roadrunner_safe(distance_to_safety, roadrunner_speed, coyote_speed)
  seconds_to_safety = distance_to_safety.to_f / roadrunner_speed
  roadrunner_distance = roadrunner_speed * seconds_to_safety
  coyote_distance = coyote_speed * seconds_to_safety - 50
  roadrunner_distance > coyote_distance
end

def main
  distance_to_safety = gets.chomp.to_i
  roadrunner_speed = gets.chomp.to_i
  coyote_speed = gets.chomp.to_i

  if is_roadrunner_safe(distance_to_safety, roadrunner_speed, coyote_speed)
    puts "Meep Meep"
  else
    puts "Yum"
  end
end

if __FILE__ == $0
  main
end