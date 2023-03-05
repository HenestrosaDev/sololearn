# Ticking Timer

You are building a `Timer` app that should count up to a given number.
Your program needs to take a number as input and make the `Timer` tick that number of times.

The code in main initializes a `Timer` and takes a number as input. Then it calls the `tick()` method for the `Timer` the given number of times.

Define the `Timer` struct with two fields: `id` and `value`, and define the `tick()` method, which should increment the `value` **by one** and **output its current value**.

>Use a **struct pointer** as the method's receiver to be able to change the `value` of the `Timer`.