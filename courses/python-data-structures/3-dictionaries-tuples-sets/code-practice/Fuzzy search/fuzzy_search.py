contacts = {
	"David": ["123-321-88", "david@test.com"],
	"James": ["241-879-093", "james@test.com"],
	"Bob": ["987-004-322", "bob@test.com"],
	"Amy": ["340-999-213", "a@test.com"]
}

contact_name = input()
if contact_name in contacts:
	print(contacts[contact_name][1])
else:
	print('Not found')
