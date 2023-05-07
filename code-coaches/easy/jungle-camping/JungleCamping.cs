using System;
using System.Collections.Generic;
using System.Text;

public class JungleCamping
{
    static Dictionary<string, string> noiseToAnimal = new Dictionary<string, string>()
    {
        {"Rawr", "Tiger"},
        {"Chirp", "Bird"},
        {"Ssss", "Snake"},
        {"Grr", "Lion"}
    };

    public static string GetAnimals(string noises)
    {
        string[] noisesSplit = noises.Split(" ");
        StringBuilder animals = new StringBuilder();

        foreach (string noise in noisesSplit)
        {
            animals.Append(noiseToAnimal[noise]).Append(" ");
        }

        return animals.ToString().Trim();
    }

    public static void Main(string[] args)
    {
        string noises = Console.ReadLine();
        Console.WriteLine(GetAnimals(noises));
    }
}