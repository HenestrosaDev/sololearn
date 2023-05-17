# ALTERNATIVE METHOD


def find_all(string: str, letter: str) -> list[int]:
    return [pos for pos, char in enumerate(string) if char == letter]


def get_longest_common_substring_alt(words: list[str]) -> str:
    reference_word = words[0]
    reference_letters = {
        letter: find_all(reference_word, letter) for letter in set(reference_word)
    }

    substrings = []
    for word in words[1:]:
        substring = ""
        last_idx_checked = None
        prev_reference_letter = -1

        for letter_idx, letter in enumerate(word):
            if letter in reference_letters:
                letter_occurrences = reference_letters[letter]
                try:
                    next_reference_letter = min(
                        num for num in letter_occurrences if num > prev_reference_letter
                    )
                except ValueError:
                    continue

                are_reference_letters_consecutive = (
                    next_reference_letter == prev_reference_letter + 1
                )
                prev_reference_letter = next_reference_letter

                # consecutive chars
                if last_idx_checked is None or are_reference_letters_consecutive:
                    last_idx_checked = letter_idx
                    substring += letter

        if substring:
            substrings.append(substring)

    common_substrings = [
        substring
        for substring in substrings
        if all(substring in word for word in words)
    ]

    # Sort the common substrings alphabetically
    sorted_common_substrings = sorted(common_substrings)

    # Return the longest common substring
    return max(sorted_common_substrings, key=len)


# METHOD USED


def get_longest_common_substring(words):
    shortest_word = min(words, key=len)
    max_length = len(shortest_word)
    longest_substring = ""

    # Iterate over all possible substrings of the shortest word
    for start in range(max_length):
        for end in range(start + 1, max_length + 1):
            substring = shortest_word[start:end]
            # Check if the substring exists in all other words
            if all(substring in word for word in words):
                # Update the longest common substring if a longer one is found
                if len(substring) > len(longest_substring):
                    longest_substring = substring
                # If there are multiple longest substrings, return the smallest one in alphabetical order
                elif (
                    len(substring) == len(longest_substring)
                    and substring < longest_substring
                ):
                    longest_substring = substring

    return longest_substring


def main():
    words = input().split()
    print(get_longest_common_substring(words))


if __name__ == "__main__":
    main()
