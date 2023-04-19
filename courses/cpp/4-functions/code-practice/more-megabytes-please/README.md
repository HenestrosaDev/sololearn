# Pass by Reference with Pointers

You operate a mobile provider running a promotion that multiplies a user's internet bandwidth.
Fix the program by completing the function and calling it, so that the given megabyte outputs before and after the promotion work correctly.

The multiplier is taken as input inside the multiplier function.

---

**Sample input**:
```
5
2
```

**Sample output**:
```
Before the promotion: 5
After the promotion: 10
```

---

**Explanation**:
The first input is the count of megabytes, the second is multiplier.  
The first outputted line represents the count of megabytes before the function-multiplier call, and the second one - after.

>Use address-of operator `&` in function call.