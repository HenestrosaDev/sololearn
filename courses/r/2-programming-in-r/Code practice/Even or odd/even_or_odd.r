x <- readLines('stdin')
num <- as.integer(x[1])

if (num %% 2 == 0) {
    print("even")
} else {
    print("odd")
}