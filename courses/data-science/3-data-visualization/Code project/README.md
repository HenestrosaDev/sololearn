# Data Science - Missing Numbers

Imputing missing values.

In the real world, you will often need to handle missing values. One way to impute (i.e., fill) the numerical column is to **replace the null values with its mean**.

---

**Task**: Given a list of numbers including some missing values, turn it into a pandas' series, impute the missing values with the **mean**, and finally return the series.

---

**Input format**: A list of numbers including one or more string `nan` to indicate a missing value.

**Output format**: A list of imputed values where all values are rounded to its first decimal place.

---

**Sample input**:  
```
3 4 5 3 4 4 nan
```

**Sample output**:
```
0 3.0
1 4.0
2 5.0
3 3.0
4 4.0
5 4.0
6 3.8
dtype: float64
```

---

>**Explanation**: The mean of 3, 4, 5, 3, 4, and 4 is 3.8, so we replace the missing value with the **mean**.
