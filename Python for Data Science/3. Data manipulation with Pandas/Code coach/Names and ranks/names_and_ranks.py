import pandas as pd

data = {
	'name': ['James', 'Billy', 'Bob', 'Amy', 'Tom', 'Harry'],
	'rank': [4, 1, 3, 5, 2, 6]
}
df = pd.DataFrame(data, index=data['name'])

rank = int(input())
name_series_for_rank = df['name'][df['rank'] == rank]

print(name_series_for_rank)
