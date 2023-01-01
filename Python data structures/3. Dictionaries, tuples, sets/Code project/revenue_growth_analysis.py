data = {
	"100-90": 25, "42-01": 48, "55-09": 12, "128-64": 71, "002-22": 18, "321-54": 19, "097-32": 33, "065-135": 64, "99-043": 80, "111-99": 11, "123-019": 5, "109-890": 72, "132-123": 27, "32-908": 27, "008-09": 25, "055-967": 35, "897-99": 44, "890-98": 56, "344-32": 65, "43-955": 59, "001-233": 9, "089-111": 15, "090-090": 17, "56-777": 23, "44-909": 27, "13-111": 21, "87-432": 15, "87-433": 14, "87-434": 23, "87-435": 11, "87-436": 12, "87-437": 16, "94-121": 15, "94-122": 35, "80-089": 10, "87-456": 8, "87-430": 40
}

ticket_price = 20
ticket_discounted_price = 5

old_age_for_discounted_price = 18
new_age_for_discounted_price = int(input())

old_price_list = [ticket_price if age >= old_age_for_discounted_price else ticket_discounted_price for age in data.values()]
new_price_list = [ticket_price if age >= new_age_for_discounted_price else ticket_discounted_price for age in data.values()]

old_price_total = sum(old_price_list)
new_price_total = sum(new_price_list)

growth = int(((new_price_total - old_price_total) / old_price_total) * 100)
print(growth)