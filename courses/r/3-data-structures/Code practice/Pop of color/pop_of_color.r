colors <- c("Red", "Green", "Blue", "Purple", "Black", "Yellow", "Orange", "Pink", "Brown", "White")

input <- readLines('stdin')
index <- input[1]
index_int <- as.numeric(index)
print(colors[index_int])