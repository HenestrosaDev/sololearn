# Machine Learning - Welcome to the Matrix

Calculating Evaluation Metrics using the Confusion Matrix.

**Task**: You will be given the values of the confusion matrix (true positives, false positives, false negatives, and true negatives). Your job is to compute the accuracy, precision, recall and f1 score and print the values rounded to 4 decimal places. To round, you can use round(x, 4).

---

**Input format**:  
The values of tp, fp, fn, tn, in that order separated by spaces

**Output format**:  
Each value on its own line, rounded to 4 decimal places, in this order:
accuracy, precision, recall, f1 score

---

**Sample input**:
```
233 65 109 480
```

**Sample output**:
```
0.8038
0.7819
0.6813
0.7281
```

---

>### Explanation:  
>**Accuracy** is `(tp + tn) / total` = (233 + 480) / (233 + 65 + 109 + 480) = 0.8038  
>**Precision** is `tp / (tp + fp)` = 233 / (233 + 65) = 0.7819  
>**Recall** is `tp / (tp + fn)` = 233 / (233 + 109) = 0.6813  
>**F1 score** is `2 * precision * recall / (precision + recall)` = 2 * 0.7819 * 0.6813 / (0.7819 + 0.6813) = 0.7281