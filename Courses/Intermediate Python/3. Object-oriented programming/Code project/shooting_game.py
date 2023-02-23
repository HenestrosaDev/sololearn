def main():
	m = Monster()
	a = Alien()

	while True:
		x = input()
		if x == 'laser':
			a.hit()
		elif x == 'gun':
			m.hit()
		else:
			break

class Enemy:
  name = ""
  lives = 0

  def __init__(self, name, lives):
    self.name = name
    self.lives = lives

  def hit(self):
    self.lives -= 1
    if self.lives <= 0:
      print(f'{self.name} killed')
    else:
    	print(f'{self.name} has {str(self.lives)} lives')

class Monster(Enemy):
  def __init__(self):
    super().__init__('Monster', 3)

class Alien(Enemy):
  def __init__(self):
    super().__init__('Alien', 5)
