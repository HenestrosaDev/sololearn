# else with for

The carousel is designed for **3 people who are each at least 16 years old**.

You are given a program that takes all 3 passengers' `ages` as inputs and inserts them in a list. Complete the program so that if it finds a value less than 16, it breaks the loop and outputs `Too young!`. If the age requirement is satisfied, the program outputs `Get ready!`.

---

**Sample input**:  
```
18
26
19
```

**Sample output**:  
```
Get ready!
```

---

>With the `while` loop, the code within the `else` block is called if the loop finishes normally, so that's where you need to output the `Get ready!` message.