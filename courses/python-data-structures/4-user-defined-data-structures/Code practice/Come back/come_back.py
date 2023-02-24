class Browser:
  def __init__(self):
    self.links = []

  def is_empty(self):
    return self.links == []

  def push(self, link):
    self.links.insert(0, link)

  def pop(self):
    return self.links.pop(0)

x = Browser()
x.push('about:blank')
x.push('www.sololearn.com')
x.push('www.sololearn.com/courses/')
x.push('www.sololearn.com/courses/python/')

while not x.is_empty():
  print(x.pop())
