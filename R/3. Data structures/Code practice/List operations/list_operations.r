str <- readLines('stdin')
x <- list("name"="James", "age"=42, "country"="USA")
x$id <- str
print(x)