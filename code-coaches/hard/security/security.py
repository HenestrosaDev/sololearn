def is_money_safe(layout: str) -> bool:
    # Find the indices of the money, thief, and guards on the casino floor
    money_index = layout.find("$")
    thief_index = layout.find("T")
    guard_indices = [i for i, char in enumerate(layout) if char == "G"]

    # Check if there is a guard between the money and the thief
    return any(
        min(money_index, thief_index) < guard_index < max(money_index, thief_index)
        for guard_index in guard_indices
    )


def main():
    layout = input()

    if is_money_safe(layout):
        print("quiet")
    else:
        print("ALARM")


if __name__ == "__main__":
    main()


# ALTERNATIVE VERSION:
#
# diagram = input()
# diagram_splitted = diagram.split('$')
#
# is_thief_on_left = True
# thief_pos = None
# guard_pos = None
#
# for idx1, part in enumerate(diagram_splitted):
# 	if 'T' in part:
# 		for idx2, c in enumerate(part):
# 			if c.upper() == 'G':
# 				if not is_thief_on_left and guard_pos is not None:
# 					continue
# 				else:
# 					guard_pos = idx2
# 			elif c.upper() == 'T':
# 				thief_pos = idx2
# 	elif idx1 == 0:
# 		# if the field is not in the first array (left), then we know that it is in the right
# 		is_thief_on_left = False
# 		continue
#
# is_left_robbed = (guard_pos is None or guard_pos < thief_pos) and is_thief_on_left
# is_right_robbed = (guard_pos is None or guard_pos > thief_pos) and not is_thief_on_left
#
# if is_left_robbed or is_right_robbed:
# 	print("ALARM")
# else:
# 	print("quiet")
