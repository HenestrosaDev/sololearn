# Polymorphism

In a turn-based strategy game, each unit can attack. The standard unit attacks with a sword. But there are two more types of units - musketeers and magicians, who attack in their own way.

The program you are given declares `Unit` class which has a method `Attack()`. It outputs `Using sword!`.

Derive `Musketeer` and `Magician` classes from the `Unit` class and override its `Attack()` method to output the corresponding messages while attacking:
- Musketeer => `Using musket!`
- Magician => `Using magic!`

>Don't forget about `virtual` keyword, which allows for override the method in derived classes.
