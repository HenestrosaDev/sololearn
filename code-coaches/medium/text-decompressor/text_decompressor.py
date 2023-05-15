def decompress_text(compressed_text: str) -> str:
    decompressed_text = ""
    for idx in range(1, len(compressed_text), 2):
        decompressed_text += compressed_text[idx - 1] * int(compressed_text[idx])

    return decompressed_text


def main():
    compressed_text = input()
    print(decompress_text(compressed_text))


if __name__ == "__main__":
    main()
