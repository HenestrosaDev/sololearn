while True:
    siblings = int(input())
    if siblings != 0:
        break

popsicles = int(input())

if popsicles % siblings == 0:
    print("give away")
else:
    print("eat them yourself")
