$noise_to_animal = {
	"Rawr" => "Tiger",
	"Chirp" => "Bird",
	"Ssss" => "Snake",
	"Grr" => "Lion",
}


def main
    noises_split = gets.chomp.split(" ")
    animals = $noises_split.map { |noise| noise_to_animal[noise] }.join(" ")
    puts animals
end


if __FILE__ == $0
    main
end