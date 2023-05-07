#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void split(char const *str, const char delim, char out[][6], int *count)
{
    const char *token;
    int i = 0;
    token = strtok((char *) str, &delim);
    while (token != NULL)
    {
        strcpy(out[i], token);
        token = strtok(NULL, &delim);
        i++;
    }
    *count = i;
}

char* get_animals(char noises[])
{
    char noisesSplit[100][6];
    int count;
    split(noises, ' ', noisesSplit, &count);

    char* animals = malloc(sizeof(char) * 1000);
    char *ptr = animals;
    const char *sep = "";

    for (int i = 0; i < count; i++)
    {
        char *animal;
        if (strcmp(noisesSplit[i], "Rawr") == 0)
        {
            animal = "Tiger";
        }
        else if (strcmp(noisesSplit[i], "Chirp") == 0)
        {
            animal = "Bird";
        }
        else if (strcmp(noisesSplit[i], "Ssss") == 0)
        {
            animal = "Snake";
        }
        else if (strcmp(noisesSplit[i], "Grr") == 0)
        {
            animal = "Lion";
        }
        else
        {
            animal = "";
        }

        ptr += sprintf(ptr, "%s%s", sep, animal);
        sep = " ";
    }

    return animals;
}


int main()
{
    char noises[1000];
    fgets(noises, sizeof(noises), stdin);

    char* animals = get_animals(noises);
    printf("%s", animals);
    free(animals);

    return 0;
}
