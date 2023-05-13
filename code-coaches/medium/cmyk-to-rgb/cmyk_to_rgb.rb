def to_rgb(cyan, magenta, yellow, key)
  red = (255 * (1 - cyan) * (1 - key)).round
  green = (255 * (1 - magenta) * (1 - key)).round
  blue = (255 * (1 - yellow) * (1 - key)).round
  "#{red},#{green},#{blue}"
end

def main
  cyan = gets.chomp.to_f
  magenta = gets.chomp.to_f
  yellow = gets.chomp.to_f
  key = gets.chomp.to_f
  puts to_rgb(cyan, magenta, yellow, key)
end

if __FILE__ == $0
  main
end
