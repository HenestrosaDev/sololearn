# Class Templates

You are making a queue management system and need to support different data types - for example, you should be able to queue names which are strings or integer numbers.

So, you decide to make a `Queue` class template, which will store an array for the queue, and have `add()` and `get()` methods.
You first create a class for integers only, to see if it works. The given code declares a `Queue` class with the corresponding methods for integers.

Change the class to convert it into a class template, to support any type for the queue and so that the code in main runs successfully.

>Remember, the syntax to make a class template is `template <class T>`.