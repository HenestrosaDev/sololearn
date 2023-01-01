# Data Science - Reshape

**Task**: Given a list of numbers and the number of rows (`r`), reshape the list into a **2-dimensional array**. Note that **r divides the length of the list evenly**.

**Input format**:
- **First line**: an integer (`r`) indicating the number of rows of the 2-dimensional array.
- **Next line**: numbers separated by the space.

**Output format**: An numpy 2d array of values rounded **to the second decimal**.

- **Sample input**:  
```
2
1.2 0 0.5 -1
```

- **Sample output**:  
```
[[ 1.2 0. ]
[ 0.5 -1. ]]
```

>**Explanation**: The required number of the rows is 2, and we are given a list of 4 numbers; as a result the 2d array should be `2 x 2`. So the first row is the first two number and the second row contains the next two numbers in given list.
