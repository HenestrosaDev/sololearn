# else Statement

You need to make a program to take a year as input and output `Leap year` if it's a leap year and `Not a leap year` if it’s not.

To check whether a year is a leap year or not, you need to check the following:
1) If the year is evenly divisible by 4, go to step 2. Otherwise, the year is NOT leap year.
2) If the year is evenly divisible by 100, go to step 3. Otherwise, the year is a leap year.
3) If the year is evenly divisible by 400, the year is a leap year. Otherwise, it is not a leap year.

---

**Sample input**: 
```
2000
```

**Sample output**: 
```
Leap year
```

---

Use the **modulo operator** `%` to check if the year is evenly divisible by a number.

---

> A year is called a **leap year** if it contains an additional day which makes the number of the days in that year is 366. This additional day is added in February which makes it 29 days long.
