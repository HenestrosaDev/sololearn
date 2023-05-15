def decompress_text(compressed_text)
  decompressed_text = ""
  (1...compressed_text.length).step(2) do |idx|
    decompressed_text += compressed_text[idx - 1] * compressed_text[idx].to_i
  end

  decompressed_text
end

def main
  compressed_text = gets.chomp
  puts decompress_text(compressed_text)
end

if __FILE__ == $0
  main
end
