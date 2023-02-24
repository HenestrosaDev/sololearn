names = ["David", "John", "Annabelle", "Johnathan", "Veronica"]
filtered_names = list(filter(lambda name: (len(name) > 5), names))
print(filtered_names)
