# Machine Learning - A Forest of Trees

Build a Random Forest model.

**Task**:  
You will be given a feature matrix `X` and target array `y`. Your task is to split the data into training and test sets, build a Random Forest model with the training set, and make predictions for the test set. Give the random forest 5 trees.

You will be given an integer to be used as the random state. Make sure to use it in both the train test split and the Random Forest model.

---

**Input format**:  
_First line_: integer (random state to use)  
_Second line_: integer (number of datapoints)  
_Next n lines_: Values of the row in the feature matrix, separated by spaces  
_Last line_: Target values separated by spaces  

**Output format**:  
Numpy array of 1s and 0s

---

**Sample input**:
```
1
10
-1.53 -2.86
-4.42 0.71
-1.55 1.04
-0.6 -2.01
-3.43 1.5
1.45 -1.15
-1.6 -1.52
0.79 0.55
1.37 -0.23
1.23 1.72
0 1 1 0 1 0 0 1 0 1
```

**Sample output**:
```
[1 0 0]
```

---

>**Explanation**: The train test split puts these three points into the test set: `[-1.55 1.04], [1.23 1.72], [-1.6 -1.52]`. The true values for these points are `[1 1 0]` and the model correctly predicts `[1 1 0]`.
