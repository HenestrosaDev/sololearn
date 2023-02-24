noiseToAnimal = {
	"Rawr" => "Tiger",
	"Chirp" => "Bird",
	"Ssss" => "Snake",
	"Grr" => "Lion",
}

noisesSplitted = gets.chomp.split(" ")
animals = noisesSplitted.map { |noise| noiseToAnimal[noise] }.join(" ")
puts animals
