# Threads

We are writing a registration program for our app. At first it should welcome the users, then ask the users to enter their names.

But the program you are given executes this sequence in reverse order. Complete it by extending the `Thread` class for `Welcome` and `Name` classes, then set the priorities for their `run` methods so that the program outputs the messages in the correct order.

>Use `setPriority(number)` method on the objects - `obj.setPriority(number)`. The higher the number, the higher the priority.
