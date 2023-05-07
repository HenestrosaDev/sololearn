#include <iostream>
#include <map>
#include <vector>
#include <sstream>

void split(std::string const &str, const char delim, std::vector<std::string> &out)
{
	std::stringstream ss(str);
	std::string segment;

	while (getline(ss, segment, delim))
	{
		out.push_back(segment);
	}
}

std::map<std::string, std::string> noiseToAnimal = {
	{"Rawr", "Tiger"},
	{"Chirp", "Bird"},
	{"Ssss", "Snake"},
	{"Grr", "Lion"},
};

std::string get_animals(std::string noises)
{
    std::vector<std::string> noisesSplit;
	split(noises, ' ', noisesSplit);

	std::string animals = "";
	for (auto noise : noisesSplit)
	{
		animals += noiseToAnimal.at(noise) + " ";
	}

	animals.pop_back(); // removing last " "
	return animals;
}

int main()
{
	std::string noises;
	getline(std::cin, noises);

	std::cout << get_animals(noises);

	return 0;
}