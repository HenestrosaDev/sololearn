import pandas as pd

names = ['James', 'Billy', 'Bob', 'Amy', 'Tom']
data = {
	'name': names,
	'number': ['1234', '5678', '2222', '1111', '0909']
}

df = pd.DataFrame(data, index=names)

name = input()
print(df.loc[name])
