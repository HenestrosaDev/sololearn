# Select a subset of the data is selected based on the two conditions
min_hp <- mtcars[mtcars$gear == 4 & mtcars$hp == min(mtcars$hp), "hp"]

# Output the result
print(min_hp)


# ALTERNATIVE:
# Subset the cars that have 4 gears
mtcars_4gears <- subset(mtcars, gear == 4)

# Find the minimum hp value of the cars that have 4 gears
min_hp <- min(mtcars_4gears$hp)

# Output the result
#print(min_hp)