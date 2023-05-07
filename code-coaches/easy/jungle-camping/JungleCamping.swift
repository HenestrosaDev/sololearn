let noiseToAnimal = [
	"Rawr": "Tiger",
	"Chirp": "Bird",
	"Ssss": "Snake",
	"Grr": "Lion"
]

if let noises = readLine() {
	let noisesSplit = noises.split(separator: " ")
	let animals = noisesSplit.map { noiseToAnimal[String($0)]! }
	print(animals.joined(separator: " "))
}
