# Generators

Finding **prime numbers** is a common coding interview task.

The given code defines a function `isPrime(x)`, which returns `True` if `x` is **prime**.
You need to create a generator function `primeGenerator()`, that will take two numbers as arguments, and use the `isPrime()` function to output the prime numbers in the given range (between the two arguments).

- **Sample input**:  
```
10
20
```

- **Sample output**:  
```
[11, 13, 17, 19]
```

>The given code takes the two arguments as input and passes them to the generator function, outputting the result as a list.