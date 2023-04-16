import pandas as pd
from sklearn.linear_model import LogisticRegression

n = int(input())
X = []

for i in range(n):
    X.append([float(x) for x in input().split()])

y = [int(x) for x in input().split()]
datapoint = [float(x) for x in input().split()]

model = LogisticRegression(solver='liblinear')
model.fit(X, y)
print(model.predict([datapoint])[0])