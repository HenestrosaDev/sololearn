import numpy as np
import pandas as pd

# Create a pandas series from the input list
lst = [float(x) if x != 'nan' else np.NaN for x in input().split()]
s = pd.Series(lst)

# Replace the "nan" values with None
s = s.replace("nan", None)

# Impute the missing values with the mean of the series
s = s.fillna(s.mean())

# Round the values in the series to the first decimal place
s = s.round(1)

print(s)


# Another way to do it with numpy:

# import pandas as pd
# import numpy as np

# lst = [float(x) if x != 'nan' else np.NaN for x in input().split()]

# # Create a numpy array from the input list
# arr = np.array(lst)

# # Replace the "nan" values with the mean (excluding 'nan')
# mean = np.nanmean(arr)
# arr[np.isnan(arr)] = mean

# # Round the values in the series to the first decimal place
# arr = np.round(arr, decimals=1)

# # Create the pandas Series from the numpy array
# series = pd.Series(arr)

# print(series)
