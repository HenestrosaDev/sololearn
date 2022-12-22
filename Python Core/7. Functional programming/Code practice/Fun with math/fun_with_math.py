def calc(nums):
	if len(nums) == 0:
		return 0
	else:
		return nums[0] ** 2 + calc(nums[1:])


nums = [1, 3, 4, 2, 5]
x = calc(nums)
print(x)
