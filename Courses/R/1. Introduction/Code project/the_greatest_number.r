input <- readLines('stdin')
x <- as.integer(input[1])
y <- as.integer(input[2])
z <- as.integer(input[3])
print(max(x, y, z))