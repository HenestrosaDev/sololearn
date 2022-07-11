noise_to_animal = {
	"Rawr": "Tiger",
	"Chirp": "Bird",
	"Ssss": "Snake",
	"Grr": "Lion",
}

noises_splitted = input().split()
animals = ' '.join(map(lambda noise: noise_to_animal[noise], noises_splitted))
print(animals)
