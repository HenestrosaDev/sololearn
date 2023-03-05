# Concurrent Counter

You are given an array of numbers. You need to take a number as input and output the number of times that number occurs in the array.
To make your program run faster, you decide to split the array into 2 halves and run 2 Goroutines for each half. After each Goroutine is done, add together the results for each half and output the final result.

The given program takes a number as input and calls the `count()` function as two Goroutines for each half of the data array.

Task:
1. Define the `count()` function, which should take a number, an array, and a channel as arguments. The function should then calculate the number of times the given number occurs in the array and send the result to the channel.
2. Collect the results of the 2 Goroutines and output their sum.

>Take a look at the Goroutines in the code to understand how the count() function should work.
