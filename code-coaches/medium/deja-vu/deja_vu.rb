def checkDejaVu(chars)
  previousChar = ""
  isRepeated = false

  chars.each do |c|
    if c == previousChar
      print("Deja Vu")
      isRepeated = true
      break
    else
      previousChar = c
    end
  end

 if !isRepeated
      print("Unique")
  end
end

def main
  chars = gets.chomp.split("")
  checkDejaVu(chars)
end

if __FILE__ == $0
  main
end