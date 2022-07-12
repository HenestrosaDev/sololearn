let noiseToAnimal = ["Rawr": "Tiger",
                    "Chirp": "Bird",
                    "Ssss": "Snake",
                    "Grr": "Lion"]

if let noises = readLine() {
	let noisesSplitted = noises.split(separator: " ")
	let animals = noisesSplitted.map { noiseToAnimal[String($0)]! }
	print(animals.joined(separator: " "))
}
