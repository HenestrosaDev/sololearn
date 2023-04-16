# Machine Learning - What's in a Column?

Getting a column from a numpy array.

**Task**: Given a csv file and a column name, print the elements in the given column.

---

**Input format**:  
_First line_: filename of a csv file  
_Second line_: column name

**Output format**:  
Numpy array

---

**Sample input**:
```
https://sololearn.com/uploads/files/one.csv
a
```

File `one.csv` contents:
```
a,b
1,3
2,4
```

**Sample output**:
```
[1 2]
```

---

>**Explanation** The `a` is the header for the first column, which has values `[1 2]`.