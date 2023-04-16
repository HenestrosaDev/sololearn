import numpy as np
import pandas as pd
from sklearn.ensemble import RandomForestClassifier
from sklearn.model_selection import train_test_split

random_state = int(input())
datapoints_number = int(input())
rows = []

for i in range(datapoints_number):
    rows.append([float(a) for a in input().split()])

X = np.array(rows)
y = np.array([int(a) for a in input().split()])

X_train, X_test, y_train, y_test = train_test_split(X, y, random_state=random_state)
rf = RandomForestClassifier(n_estimators=5, random_state=random_state)
rf.fit(X_train, y_train)

print(rf.predict(X_test))
