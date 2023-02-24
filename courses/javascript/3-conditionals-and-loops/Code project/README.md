# The Snail in the Well

The snail climbs up 7 feet each day and slips back 2 feet each night. How many days will it take the snail to get out of a well with the given depth?

---

**Sample input**: 
```
31
```

**Sample output**: 
```
6
```

---

**Explanation**: Let's break down the distance the snail covers each day:  
*Day 1*: 7-2=5  
*Day 2*: 5+7-2=10  
*Day 3*: 10+7-2=15  
*Day 4*: 15+7-2=20  
*Day 5*: 20+7-2=25  
*Day 6*: 25+7=32

So, on Day 6 the snail will reach 32 feet and get out of the well at day, without slipping back that night.

---

> **Hint**: You can use a loop to calculate the distance the snail covers each day, and break the loop when it reaches the desired distance.