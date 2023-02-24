def uppercase_decorator(func):
  def wrapper(text):
    return func(text).upper()

  return wrapper

@uppercase_decorator
def display_text(text):
  return text

text = input()
print(display_text(text))
