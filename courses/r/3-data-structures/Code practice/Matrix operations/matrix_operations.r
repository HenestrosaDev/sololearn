rows <- readLines('stdin')
rows <- as.integer(rows[1])

m <- matrix(1:10, nrow = rows)
print(t(m))