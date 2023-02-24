def main():
	name = input()
	level = input()

	player = Player(name, level)
	player.intro()

class Player:
	def __init__(self, name, level):
		self.name = name
		self.level = level

	def intro(self):
		print(self.name + " (Level " + self.level + ")")

main()
