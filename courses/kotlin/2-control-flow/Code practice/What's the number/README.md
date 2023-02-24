# Digit Sum

Finding the sum of the digits of a number is a popular coding challenge.
Given a number as input, calculate and output its digit sum.

---

**Sample input**: 
```
426
```

**Sample output**: 
```
12
```

---

**Hint**: Use a `while` loop to iterate over the number. During each iteration, add the last digit to the sum by dividing the number **by 10** and taking the remainder (**num % 10**), then remove the last digit of the number by dividing it **by 10** (num / 10).

---

>Iterate until the number becomes `0`.