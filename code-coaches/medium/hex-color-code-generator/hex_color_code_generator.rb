def rgb_to_hex(r, g, b)
  # Convert each RGB value to a two-digit hex string
  r_hex = r.to_s(16).rjust(2, '0')
  g_hex = g.to_s(16).rjust(2, '0')
  b_hex = b.to_s(16).rjust(2, '0')

  # Concatenate the hex strings with a "#" in front
  hex_code = '#' + r_hex + g_hex + b_hex
  return hex_code
end

def main
  r_rgb = gets.chomp.to_i
  g_rgb = gets.chomp.to_i
  b_rgb = gets.chomp.to_i

  puts rgb_to_hex(r_rgb, g_rgb, b_rgb)
end

if __FILE__ == $0
  main
end