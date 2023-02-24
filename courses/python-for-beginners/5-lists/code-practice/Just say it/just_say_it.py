commands = [
	"Lights Off", 
	"Lock the door",
	"Open the door", 
	"Make Coffee", 
	"Shut down"
]

command = input()

if command in commands:
	print("OK")
else:
	print("Not supported")
