noiseToAnimal = {
	"Rawr": "Tiger",
	"Chirp": "Bird",
	"Ssss": "Snake",
	"Grr": "Lion",
}

noisesSplitted = input().split()
animals = ' '.join(map(lambda noise: noiseToAnimal[noise], noisesSplitted))
print(animals)
