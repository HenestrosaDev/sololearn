noiseToAnimal = {
	"Rawr" => "Tiger",
	"Chirp" => "Bird",
	"Ssss" => "Snake",
	"Grr" => "Lion",
}

noisesSplit = gets.chomp.split(" ")
animals = noisesSplit.map { |noise| noiseToAnimal[noise] }.join(" ")
puts animals
