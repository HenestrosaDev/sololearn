# Data Science - Ordinary Squares

Ordinary least squares for linear regression.

Ordinary least squares (OLS) is a method to estimate the parameters `β` in a simple linear regression, `Xβ = y`, where `X` is the feature matrix and `y` is the dependent variable (or target), by minimizing the sum of the squares of the differences between the observed dependent variable in the given dataset and those predicted by the linear function. Mathematically, the solution is given by the formula in the image, where the superscript `T` means the transpose of a matrix, and the superscript `-1` means it is an inverse of a matrix.

![contentImage](https://api.sololearn.com/DownloadFile?id=4874)

---

**Task**: Given a 2D array feature matrix `X` and a vector `y`, return the **coefficient vector**; see the formula above.

---

**Input format**:
- First line: two integers separated by spaces, the first indicates the rows of the feature matrix `X` (n) and the second indicates the columns of `X` (p).
- Next n lines: values of the row in the feature matrix (`X`).
- Last line: p values of target `y`.

**Output format**: A numpy 1d array of values rounded to the second decimal.

---

**Sample input**:
```
2 2
1 0
0 2
2 3
```

**Sample output**:
```
[2. , 1.5]
```

---

>**Explanation**: The feature matrix `X` has `n = 2` rows and `p = 2` features. Following the OLS solution, substitute `X` by `np.array([[1. 0.], [0. 2.]]` and `y` by `np.array([2. 3.])`, respectively, performing the matrix multiplication using tools in numpy results in `np.array([2. 1.5])`.