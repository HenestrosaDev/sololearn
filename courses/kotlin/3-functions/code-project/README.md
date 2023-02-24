# Shipping Calculator

You are working on a eCommerce website and need to make a shipping cost calculator based on the order amount.

The store uses the following cost structure:  
- For orders in the **US**:
	- **$75+** orders have **free shipping**
	- Orders **less than $75** have a **shipping fee of 10%** of the total order amount.
- For international orders:
	- **15% shipping fee**, with a **maximum of $50**. This means that the maximum shipping fee for an international order is $50.

You need to complete the given `shippingCost()` function, which takes the order amount and a `Boolean` indicating whether the order is international or not, and returns the shipping cost for that order. The return amount should be a `Double`.

---

**Sample input**:  
```
140.0
true
```

**Sample output**:  
```
21.0
```

---

>The order is for $140 and is international. So, the shipping cost would be 15%, which is $21.
