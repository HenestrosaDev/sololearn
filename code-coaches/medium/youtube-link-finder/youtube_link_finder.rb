link = gets.chomp
# we take the first match because the id goes before any parameter
unfilteredId = link.scan(/[\/=][\w-]{11}/)[0]
# [1..-1] removes the first character of the string, which is / or =
filteredId = unfilteredId[1..-1]
puts filteredId