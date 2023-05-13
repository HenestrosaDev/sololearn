#include <stdio.h>
#include <math.h>

char* to_rgb(float cyan, float magenta, float yellow, float key)
{
    static char rgb[16];
    int red = round(255 * (1 - cyan) * (1 - key));
    int green = round(255 * (1 - magenta) * (1 - key));
    int blue = round(255 * (1 - yellow) * (1 - key));

    sprintf(rgb, "%d,%d,%d", red, green, blue);

    return rgb;
}

int main()
{
    float cyan, magenta, yellow, key;
    scanf("%f%f%f%f", &cyan, &magenta, &yellow, &key);

    printf("%s", to_rgb(cyan, magenta, yellow, key));

    return 0;
}
