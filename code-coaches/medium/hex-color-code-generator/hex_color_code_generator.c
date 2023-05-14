#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* rgb_to_hex(int r, int g, int b)
{
    // Allocate a string buffer to hold the hex code
    char* hex_code = (char*) malloc(sizeof(char) * 8);

    // Convert each RGB value to a two-digit hex string
    sprintf(hex_code, "#%02x%02x%02x", r, g, b);

    return hex_code;
}

int main()
{
    int r_rgb, g_rgb, b_rgb;
    scanf("%d%d%d", &r_rgb, &g_rgb, &b_rgb);

    printf("%s", rgb_to_hex(r_rgb, g_rgb, b_rgb));

    return 0;
}
