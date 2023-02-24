sum <- 0

for (x in 1:1000) {
    if (x%%3 == 0) {
        sum = sum + x
    }
}

print(sum)