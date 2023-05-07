noise_to_animal = {
    "Rawr": "Tiger",
    "Chirp": "Bird",
    "Ssss": "Snake",
    "Grr": "Lion",
}


def main():
    noises_split = input().split()
    animals = " ".join(map(lambda noise: noise_to_animal[noise], noises_split))
    print(animals)


if __name__ == "__main__":
    main()
