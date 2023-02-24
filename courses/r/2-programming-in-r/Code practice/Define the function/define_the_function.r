square <- function(num) {
    return(num ** 2)
}

x <- readLines('stdin')
x <- as.integer(x[1])

result <- square(x)

print(result)
