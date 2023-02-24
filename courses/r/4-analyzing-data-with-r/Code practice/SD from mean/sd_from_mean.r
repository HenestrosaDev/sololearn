mpg <- mtcars$mpg
result <- mtcars[mean(mpg)-sd(mpg) <= mpg & mean(mpg)+sd(mpg) >= mpg, "mpg"]
print(length(result))