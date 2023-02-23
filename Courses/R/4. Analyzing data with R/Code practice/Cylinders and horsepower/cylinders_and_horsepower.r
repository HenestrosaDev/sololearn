automatic_transmission_column <- mtcars[mtcars$am == 0,]
result <- tapply(automatic_transmission_column$hp, automatic_transmission_column$cyl, max)
print(result)