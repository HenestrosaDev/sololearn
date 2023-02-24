import numpy as np

y_true = np.array([int(x) for x in input().split()])
y_pred = np.array([int(x) for x in input().split()])

true_positive = len([x for idx, x in enumerate(y_pred) if y_true[idx] == 1 and x == 1])
false_positive = len([x for idx, x in enumerate(y_pred) if y_true[idx] == 0 and x == 1])
false_negative = len([x for idx, x in enumerate(y_pred) if y_true[idx] == 1 and x == 0])
true_negative = len([x for idx, x in enumerate(y_pred) if y_true[idx] == 0 and x == 0])

confusion_matrix = [[true_positive, false_positive], [false_negative, true_negative]]

np_confusion_matrix = np.array(confusion_matrix, dtype=np.float32)

print(np_confusion_matrix)


# Another way to do it:

# import numpy as np

# # Define the lists of binary labels
# y_true = np.array([int(x) for x in input().split()])
# y_pred = np.array([int(x) for x in input().split()])

# # Compute the confusion matrix
# confusion_matrix = np.zeros((2, 2), dtype=int)
# for i in range(len(y_true)):
#     if y_true[i] == 1 and y_pred[i] == 1:
#         confusion_matrix[0, 0] += 1  # True positive
#     elif y_true[i] == 0 and y_pred[i] == 1:
#         confusion_matrix[0, 1] += 1  # False positive
#     elif y_true[i] == 1 and y_pred[i] == 0:
#         confusion_matrix[1, 0] += 1  # False negative
#     else:
#         confusion_matrix[1, 1] += 1  # True negative

# # Print the confusion matrix
# print(confusion_matrix)
