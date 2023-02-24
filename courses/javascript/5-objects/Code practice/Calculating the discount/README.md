# Adding Methods

A store manager needs a program to set discounts for products.

The program should take the **product ID**, `price` and `discount` as input and output the **discounted price**. However, the `changePrice` method, which should calculate the discount, is incomplete. Fix it!

---

**Sample input**:  
```
LD1493
1700
15
```

**Sample output**:  
```
LD1493 price: 1700
LD1493 new price: 1445
```

---

>The first input is the product ID, the second is the price before discounting, and the third is discount percentage.  
So after discounting the new price will be `1700 - (0.15 * 1700) = 1445`