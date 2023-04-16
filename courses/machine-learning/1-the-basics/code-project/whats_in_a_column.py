import pandas as pd

filename = input()
column_name = input()

df = pd.read_csv(filename)
print(df[column_name].values)