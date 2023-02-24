class CallCenter:
  def __init__(self):
    self.customers = []

  def is_empty(self):
    return self.customers == []

  def enqueue(self, x):
    self.customers.insert(0, x)

  def dequeue(self):
    return self.customers.pop()


c = CallCenter()

while True:
  n = input()
  if n == 'end':
    break
  c.enqueue(n)

total_time = 0
while True:
  if c.is_empty():
    break

  call = c.dequeue()
  total_time += 10 if call == 'technical' else 5

print(total_time)
