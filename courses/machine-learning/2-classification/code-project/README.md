# Machine Learning - Bob the Builder

Building a Logistic Regression model.

**Task**:
You are given a feature matrix and a single datapoint to predict. Your job will be to build a Logistic Regression model with the feature matrix and make a prediction (1 or 0) of the single datapoint.

---

**Input format**:  
_First line_: Number of data points in the feature matrix (n)  
_Next n lines_: Values of the row in the feature matrix, separated by spaces  
_Next line_: Target values separated by spaces  
_Final line_: Values (separated by spaces) of a single datapoint without a target value

**Output format**:  
Either 1 or 0

---

**Sample input**:
```
6
1 3
3 5
5 7
3 1
5 3
7 5
1 1 1 0 0 0
2 4
```

**Sample output**:
```
1
```

![contentImage](https://api.sololearn.com/DownloadFile?id=3888)

---

>**Explanation**: We can see the points plotted on the graph above and the line that separates the data. The point `(2, 4)` is noted on the graph so you can see it is on the positive side of the line, so the result is 1.