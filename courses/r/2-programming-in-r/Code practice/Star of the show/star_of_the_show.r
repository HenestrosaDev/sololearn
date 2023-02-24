x <- readLines('stdin')
x <- as.integer(x[1])

stars <- function(number) {
    for (x in 1:number) {
        print("*")
    }
}


stars(x)