#include <iostream>
#include <map>
#include <vector>
#include <sstream>

void split(std::string const &str, const char delim, std::vector<std::string> &out)
{
	std::stringstream ss(str);
	std::string segment;

	while (std::getline(ss, segment, delim))
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

int main()
{
	std::string noises;
	std::getline(std::cin, noises);

	std::vector<std::string> noisesSplitted;
	split(noises, ' ', noisesSplitted);

	std::string animals = "";
	for (auto noise : noisesSplitted)
	{
		animals += noiseToAnimal.at(noise) + " ";
	}

	animals.pop_back(); // removing last " "
	std::cout << animals;

	return 0;
}