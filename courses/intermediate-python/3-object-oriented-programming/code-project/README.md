# Shooting Game

You are creating a shooting game!

The game has two types of enemies: **aliens** and **monsters**. You shoot the **aliens** using your **laser**, and **monsters** using your **gun**. Each hit decreases the lives of the enemies by **1**.

The given code declares a generic `Enemy` class, as well as the `Alien` and `Monster` classes, with their corresponding `lives` count. It also defines the `hit()` method for the `Enemy` class.

You need to do the following to complete the program:
1. Inherit the `Alien` and `Monster` classes from the `Enemy` class.
2. Complete the `while` loop that continuously takes the weapon of choice from user input and call the corresponding object's `hit()` method.

---

**Sample Input**:  
```
laser
laser
gun
exit
```

**Sample Output**:  
```
Alien has 4 lives
Alien has 3 lives
Monster has 2 lives
```

---

>The `while` loop stops when the user enters `exit`.