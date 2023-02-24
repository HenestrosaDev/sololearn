# SD from Mean

Oftentimes, the **standard deviation** is used to understand the dispersion of the data.

We are working with the `mtcars` dataset and need to find the number of cars that fall into **1 standard deviation from the mean** of the `mpg` column.
This means that we need to find the cars that have the mpg value in the range of `mean(mpg)-sd(mpg)` and `mean(mpg)+sd(mpg)`.

**Task**: Output the number of cars that satisfy the condition. 

>**Hint**: The length function can be used to find the number of items in a vector.