using System;
using System.Collections.Generic;

public class JungleCamping
{
    public static void Main(string[] args)
    {
        Dictionary<string, string> noiseToAnimal = new Dictionary<string, string>()
        {
            {"Rawr", "Tiger"},
            {"Chirp", "Bird"},
            {"Ssss", "Snake"},
            {"Grr", "Lion"}
        };

        string noises = Console.ReadLine();
        string[] noisesSplit = noises.Split(' ');

        string animals = "";
        foreach (string noise in noisesSplit)
        {
            animals += noiseToAnimal[noise] + " ";
        }

        string animalSounds = animals.Trim();
        Console.WriteLine(animalSounds);
    }
}