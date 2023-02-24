text = "Amy has 128 dollars, while David has 54 dollars. Amy is going to the zoo. David watches soccer."

to_replace = input()
replace_by = input()

print(text.count(to_replace))
text_replaced = text.replace(to_replace, replace_by)
print(text_replaced)
