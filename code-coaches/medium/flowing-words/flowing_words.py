def does_sentence_flow(sentence: str) -> bool:
    words = sentence.split()
    return all(words[i][0] == words[i - 1][-1] for i in range(1, len(words)))


def main():
    sentence = input()

    if does_sentence_flow(sentence):
        print("true")
    else:
        print("false")


if __name__ == "__main__":
    main()
