def get_blocks_between_house_and_pond(layout)
  # Find the indices of the house and pond, and the indices of all the blocks
  house_index = layout.index("H")
  pond_index = layout.index("P")
  block_indices = layout.chars.each_index.select { |i| layout[i] == "B" }

  return block_indices.count { |block_index|
    [house_index, pond_index].min < block_index && block_index < [house_index, pond_index].max
  }
end

def main
  layout = gets.chomp
  puts get_blocks_between_house_and_pond(layout)
end

if __FILE__ == $0
  main
end
