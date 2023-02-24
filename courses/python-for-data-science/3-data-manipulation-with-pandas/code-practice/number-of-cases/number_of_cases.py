import pandas as pd

df = pd.read_csv("/usercode/files/ca-covid.csv")

df.drop('state', axis=1, inplace=True)
df['date'] = pd.to_datetime(df['date'], format="%d.%m.%y")
df['month'] = df['date'].dt.month_name()
df.set_index('date', inplace=True)

month = input()
max_cases_in_month = df[df['month'] == month]['cases'].max()

print(df[df.cases == max_cases_in_month])
