def balanced(expression):
	opening_parenthesis = []
	for ch in expression:
		if ch == '(':
			opening_parenthesis.insert(0, ch)
		elif ch == ')':
			try:
				opening_parenthesis.pop(0)
			except:
				return False

	return True if len(opening_parenthesis) == 0 else False


print(balanced(input()))
