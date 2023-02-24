index <- readLines('stdin')
index <- as.integer(index[1])

x <- data.frame(
"name" = c("James", "Amy", "David", "Bob", "John"),
"year" = c("1988","2001", "1996", "2004", "1999"))

nickname <- paste(x[[index, "name"]], x[[index, "year"]], sep="")
print(nickname)