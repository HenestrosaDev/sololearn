# Parking Fee

You are making a car parking software that needs to calculate and output the amount due based on the number of hours the car was parked.

The fee is calculated based on the following price structure:
- The **first 5 hours** are billed at **$1 per hour**.
- **After that**, each hour is billed at **$0.5 per hour**.
- **For each 24 hours**, there is a flat fee of **$15**.

This means, that, for example, if a car parked for 26 hours, the bill should be `15+(2*0.5) = 16.0`, because it was parked for 24 hours plus 2 additional hours.

---

**Sample input**: 
```
8
```

**Sample output**: 
```
6.5
```

---

**Explanation**: The first 5 hours are billed at $1/hour, which results in $5. After that, the next 3 hours are billed at $0.5/hour = $1.5. So, the total would be $5+$1.5 = $6.5.

---

>The output should be a `Double`, even if the amount is a round number.
