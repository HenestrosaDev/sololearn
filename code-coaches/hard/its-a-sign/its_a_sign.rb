def is_palindrome(word)
  word == word.reverse
end

def contains_palindrome(words)
  words.each do |word|
    return true if is_palindrome(word)
  end
  false
end

def main
  words = []
  4.times do
    words << gets.chomp
  end

  if contains_palindrome(words)
    puts "Open"
  else
    puts "Trash"
  end
end

if __FILE__ == $0
  main
end
