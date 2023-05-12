def is_zip_code_valid(zip_code)
  begin
    zip_code_int = Integer(zip_code)
    return zip_code.length == 5
  rescue ArgumentError
    return false
  end
end

def main
  zip_code = gets.chomp
  puts is_zip_code_valid(zip_code)
end

if __FILE__ == $0
  main
end
