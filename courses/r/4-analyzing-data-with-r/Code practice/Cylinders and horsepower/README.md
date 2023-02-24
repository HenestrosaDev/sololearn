# Max HP by Cyl

You need to understand how the number of cylinders affects the horsepower of a car. 
For that, you need to find the **maximum** `hp` value for each of the `cyl` values in the `mtcars` dataset, but only for the cars that have automatic transmission, meaning `am` is equal to **0**.

Use `tapply` to group the data and output the result.

>**Hint**: First, filter the data we need, then group by the `cyl` column and apply the maximum function on the `hp` column.