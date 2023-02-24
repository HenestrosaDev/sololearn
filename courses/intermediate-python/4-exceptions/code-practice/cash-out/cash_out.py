def main():
  try:
    amount = int(input())
    withdraw(amount)  
  except:
    print("Please enter a number")

def withdraw(amount):
   print(str(amount) + " withdrawn!")

main()
