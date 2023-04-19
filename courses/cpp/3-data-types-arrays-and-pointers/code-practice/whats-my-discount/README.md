Arrays

You are given an array of doubles of items in a store that have different prices (see template).
Write a program that takes the "percent off" discount as input and outputs discounted item prices on one line in the same sequence you are given, separated by a space (" ").

---

**Sample input**:
```
25
```

**Sample output**:
```
375 9.3 70.5 33.75 2.25 60.75 750.675 63.75 67.5 0.75 26.25
```

 ---

>To get a discounted price use the formula: `a – a * p / 100`, where `a` is the initial price and `p` is the discount percent off.