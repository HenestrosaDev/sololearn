
#include <iostream>
#include <string>

std::string decompress_text(const std::string& compressed_text)
{
    std::string decompressed_text;
    for (int idx = 1; idx < compressed_text.length(); idx += 2)
    {
        char current_char = compressed_text[idx - 1];
        int repeat_count = compressed_text[idx] - '0';  // Convert character to integer
        decompressed_text.append(repeat_count, current_char);
    }

    return decompressed_text;
}

int main()
{
    std::string compressed_text;
    std::cin >> compressed_text;

    std::cout << decompress_text(compressed_text);

    return 0;
}
