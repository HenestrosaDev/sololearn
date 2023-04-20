# Virtual Functions

You are making a program to manage an animal zoo. You have a base class `Animal`, and two subclasses: `Dog` and `Cat`.

In main, you have an array of `Animal` pointers, where each pointer can hold a `Dog` or a `Cat`.
The code loops through the array and calls the `speak()` method of the object, irrespective of its type.

Complete the code by adding the `speak()` method to the Animal class, so that the code works and the corresponding methods get called correctly.

>This is an example of polymorphism in action: without knowing the subtype of the objects, you are able to call the `speak()` method, and the corresponding implementation is getting executed.