diagram = input()
diagramSplitted = diagram.split('$')

isThiefOnLeft = True
thiefPos = None
guardPos = None

for idx1, part in enumerate(diagramSplitted):
	if 'T' in part:
		for idx2, c in enumerate(part):
			if c.upper() == 'G':
				if not isThiefOnLeft and guardPos is not None:
					continue
				else:
					guardPos = idx2
			elif c.upper() == 'T':
				thiefPos = idx2
	elif idx1 == 0:
		# if the field is not in the first array (left), then we know that it is in the right
		isThiefOnLeft = False
		continue

isLeftRobbed = (guardPos is None or guardPos < thiefPos) and isThiefOnLeft
isRightRobbed = (guardPos is None or guardPos > thiefPos) and not isThiefOnLeft

if isLeftRobbed or isRightRobbed:
	print("ALARM")
else:
	print("quiet")
