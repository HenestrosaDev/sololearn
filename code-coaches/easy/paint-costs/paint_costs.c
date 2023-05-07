#include <stdio.h>
#include <math.h>

int main()
{
    int colorsNumber;
    scanf("%d", &colorsNumber);

    double basePrice = 40.0;
    double paintPrice = 5.0;
    double taxPercent = 10.0;

    double subtotal = basePrice + (paintPrice * colorsNumber);
    int total = ceil((subtotal / taxPercent) + subtotal);

    printf("%d", total);

    return 0;
}
