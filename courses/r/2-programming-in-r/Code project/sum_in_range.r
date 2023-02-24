input <- readLines('stdin')
x <- as.integer(input[1])
y <- as.integer(input[2])

rangeSum <- function(x, y) {
    sum <- 0
    for (num in x:y) {
        sum <- sum + num
    }
    return(sum)
}

result <- rangeSum(x, y)
print(result)