diagram = input()
diagram_splitted = diagram.split('$')

is_thief_on_left = True
thief_pos = None
guard_pos = None

for idx1, part in enumerate(diagram_splitted):
	if 'T' in part:
		for idx2, c in enumerate(part):
			if c.upper() == 'G':
				if not is_thief_on_left and guard_pos is not None:
					continue
				else:
					guard_pos = idx2
			elif c.upper() == 'T':
				thief_pos = idx2
	elif idx1 == 0:
		# if the field is not in the first array (left), then we know that it is in the right
		is_thief_on_left = False
		continue

is_left_robbed = (guard_pos is None or guard_pos < thief_pos) and is_thief_on_left
is_right_robbed = (guard_pos is None or guard_pos > thief_pos) and not is_thief_on_left

if is_left_robbed or is_right_robbed:
	print("ALARM")
else:
	print("quiet")
