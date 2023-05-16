def calculate_moves(map_str)
  map_rows = map_str.split(",")
  num_map_rows = map_rows.length

  letter_to_find = "P"
  p1 = nil
  p2 = nil

  num_map_rows.times do |i|
    num_map_rows.times do |j|
      if map_rows[i][j] == letter_to_find
        if p1.nil?
          p1 = [i, j]
        else
          p2 = [i, j]
        end
      end
    end
  end

  # Calculate the number of moves using Manhattan distance formula
  moves = (p1[0] - p2[0]).abs + (p1[1] - p2[1]).abs

  moves
end

def main
  map_str = gets.chomp
  puts calculate_moves(map_str)
end

if __FILE__ == $0
  main
end
