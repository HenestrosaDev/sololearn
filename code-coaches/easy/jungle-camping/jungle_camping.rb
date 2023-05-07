noiseToAnimal = {
	"Rawr" => "Tiger",
	"Chirp" => "Bird",
	"Ssss" => "Snake",
	"Grr" => "Lion",
}


def main
    noisesSplit = gets.chomp.split(" ")
    animals = noisesSplit.map { |noise| noiseToAnimal[noise] }.join(" ")
    puts animals
end


if __FILE__ == $0
    main
end