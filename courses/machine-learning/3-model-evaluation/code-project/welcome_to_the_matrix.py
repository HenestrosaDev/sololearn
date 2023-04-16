tp, fp, fn, tn = [int(x) for x in input().split()]

# Compute metrics
accuracy = (tp + tn) / (tp + tn + fp + fn)
precision = tp / (tp + fp)
recall = tp / (tp + fn)
f1_score = 2 * precision * recall / (precision + recall)

# Print results
print(round(accuracy, 4))
print(round(precision, 4))
print(round(recall, 4))
print(round(f1_score, 4))